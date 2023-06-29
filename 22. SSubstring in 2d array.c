#include<stdio.h>
main()
{
    char str[5][5]={"welco","metoz","ohoco","rpora","tion"};
    char substr[]="por";
    int len2=strlen(substr);
    // printf("%c",str[4][]);
    int count=0,index=0,flag=0,start_row,start_col,end_row,end_col;
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            if(str[i][j]==substr[index])
            {
                for(int k=i;k<=i+len2;k++)
                {
                    if(str[k][j]==substr[index++])
                    {
                        count++;
                    }
                }
                if(count==len2)
                {
                    flag=1;
                    start_row=i;
                    start_col=j;
                    end_row=i+len2-1;
                    end_col=j;
                    break;
                }
                else
                {
                    count=0;
                    index=0;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag!=1)
    {
        for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
        {
            if(str[i][j]==substr[index])
            {
                for(int k=j;k<=j+len2;k++)
                {
                    if(str[i][k]==substr[index++])
                    {
                        count++;
                    }
                }
                if(count==len2)
                {
                    flag=1;
                    start_row=i;
                    start_col=j;
                    end_row=i;
                    end_col=j+len2-1;
                    break;
                }
                else
                {
                    count=0;
                    index=0;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }

    }

    if(flag ==1)
    {
        printf("<%d,%d>\n <%d,%d>\n",start_row,start_col,end_row,end_col);
    }
    else
    {
        printf("not found");
    }
}
