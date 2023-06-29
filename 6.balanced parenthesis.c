#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[20],open[20],close[20];
    printf("enter the string :");
    scanf("%s",str);
    int len=strlen(str)-1,open_ptr=0,flag=0;

    for(int i=0;i<=len;i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(' )
        {
            open[open_ptr++]=str[i];
        }
        else if(str[i]=='}' && open_ptr!=0)
        {
            if(open[--open_ptr]=='{')
            {
                open[open_ptr]='\0';
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(str[i]==')' && open_ptr!=0)
        {
            if(open[--open_ptr]=='(')
            {
                open[open_ptr]='\0';
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(str[i]==']' && open_ptr!=0)
        {
            if(open[--open_ptr]=='[')
            {
                open[open_ptr]='\0';
            }
            else
            {
                flag=1;
                break;
            }
        }
        else
        {
                flag=1;
                break;
        }
    }
    if (flag==1 || open_ptr>0)
    {
        printf("not a valid");
    }
    else
    {
        printf("valid");
    }
}
