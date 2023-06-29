#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int check(int element[],int n)
{
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(element[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void set_elements(int elements[],int n)
{
    for(int i=1;i<=n;i++)
    {
        elements[i]=0;
    }
}
/*void print(int elements[],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",elements[i]);
    }
    printf("\n");
}*/ l,.

int main()
{
    int n;
    printf("size of suduko :");
    scanf("%d",&n);
    int sub_n=sqrt(n);
    printf("%d",sub_n);
    int elements[n];
    // set zero for elements
    for(int i=1;i<=n;i++)
    {
        elements[i]=0;
    }
    //get numbers of suduko
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }*/
    int a[9][9]={{6,1,9,7,4,2,3,5,8},{4,5,7,8,3,1,6,9,2},{8,2,3,6,9,5,1,7,4},{2,3,6,4,1,9,5,8,7},{5,9,1,2,7,8,4,6,3},{7,8,4,3,5,6,2,1,9},{9,6,2,1,8,3,7,4,5},{3,4,5,9,6,7,8,2,1},{1,7,8,5,2,4,9,3,6}};

    //sub

    int row=0,col=0,flag=0;
    printf("\nSUB MATRIX CHECKING\n");
    while(row<n)
    {
        for(int i=row;i<row+sub_n;i++)
        {
            for(int j=col;j<col+sub_n;j++)
            {
                elements[a[i][j]]=1;
            }
        }
        //print(elements,n);

        if(check(elements,n)==1)
        {
            col=col+sub_n;
            if(col>=n)
            {
                row=row+sub_n;
                col=0;
            }
            set_elements(elements,n);

           //printf("row : %d  col : %d\n",row,col);
        }
        else
        {
            flag=1;
            printf("wrong");
            break;
        }
    }
    //ROW WISE
    printf("\nROW WISE CHECKINNG\n");
    set_elements(elements,n);
    if(flag==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                elements[a[i][j]]=1;
            }
            if (check(elements,n)==1)
            {
                set_elements(elements,n);
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    set_elements(elements,n);
    //COLUMN WISE
    printf("\nCOLUMN WISE CHECKINNG\n");
    if(flag==0)
    {
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                elements[a[i][j]]=1;
            }
            if (check(elements,n)==1)
            {
                set_elements(elements,n);
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("correct");
    }
    else
    {
        printf("wrong");
    }

}
