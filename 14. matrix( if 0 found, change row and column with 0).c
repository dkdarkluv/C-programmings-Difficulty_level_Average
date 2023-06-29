#include<stdio.h>
main()
{
    int a[10][10],unit[10][10],row,col;
    printf("enter the row :");
    scanf("%d",&row);
    printf("enter the column :");
    scanf("%d",&col);

//GET ELEMENT FROM USER
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
            unit[i][j]=1;
        }
    }
//

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                for(int unit_row=0;unit_row<row;unit_row++)
                {
                    unit[i][unit_row]=0;
                }
                for(int unit_col=0;unit_col<col;unit_col++)
                {
                    unit[unit_col][j]=0;
                }

            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",unit[i][j]*a[i][j]);
        }
        printf("\n");
    }
}
