#include<stdio.h>
#include<string.h>
int check_palindrome(char *str)
{
    int len=strlen(str);
    char* rev_str;
    char cpy_str[len];
    strcpy(cpy_str,str);
    rev_str =strrev(cpy_str);
    //printf("str : %s\n",str);
    if(strcmp(rev_str,str)==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[30];
    scanf("%[^\n]",str);
    int len=strlen(str);
    char sub_str[30];
    int count=0;

    for(int i=0;i<=len;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            sub_str[count++]=str[i];
            sub_str[count]='\0';
        }
        else
        {
            if(check_palindrome(sub_str)==0)
            {
                printf("%s",sub_str);
            }
            count=0;
            sub_str[count]='\0';
        }
    }
}
