#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int len=strlen(str1);
    int start=-1,end=-1;
    for(int i=0;i<len;i++)
    {
        if(str1[i]!=str2[i] && start==-1)
        {
            start=i;
        }
        else if((str1[i]==str2[i] || i==len-1) && start!=-1)
        {
            if(i!=len-1)
            {
                end=i-1;
            }
            else
            {
                end=i;
            }

        }
        if(start!=-1 && end!=-1)
        {
            for(int j=start;j<=end;j++)
            {
                printf("%c",str1[j]);
            }
            printf("-");
            for(int j=start;j<=end;j++)
            {
                printf("%c",str2[j]);
            }
            printf("\n");
            start=-1;
            end=-1;
        }

    }
}
