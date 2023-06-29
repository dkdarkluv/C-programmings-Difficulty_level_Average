#include<stdio.h>

int main()
{
    int row,num=1,cpy_num=1;
    scanf("%d",&row);
    int col=row,increment=row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j==0)
            {
                printf("%d\t",num);
            }
            else
            {
                num=num+increment;
                printf("%d\t",num);
                increment--;
            }
        }
        printf("\n");
        increment=row;
        num=++cpy_num;
        col--;
    }
}
