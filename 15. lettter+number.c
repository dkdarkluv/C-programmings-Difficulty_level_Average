#include<stdio.h>
#include<string.h>
int isalpha(char c)
{
    if(c>='a' && c<='z' || c>='A' && c<='Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[40];
    scanf("%s",str);
    char *alpha_ptr=malloc(2000);
    int flag1=0,flag2=0,sum=0,alpha_count=0,j,start_count=0;

    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i])==1)
        {
            *alpha_ptr=str[i];
            alpha_ptr++;
            *alpha_ptr='\0';
            flag1=1;
            alpha_count++;

        }
        else
        {

            for(j=i;j<strlen(str);j++)
            {
                if(isalpha(str[j])==0)
                {

                    sum=(sum*10)+(str[j]-48);
                }
                else
                {
                    break;
                }
            }
            flag2=1;
            i=j-1;

        }
        if(flag1+flag2==2)
        {
            for(int m=0;m<sum;m++)
            {

                printf("%s",alpha_ptr-alpha_count);
            }
            flag1=0;
            flag2=0;
            sum=0;
            start_count=start_count+alpha_count;
            alpha_count=0;
        }
    }

    return 0;
}
