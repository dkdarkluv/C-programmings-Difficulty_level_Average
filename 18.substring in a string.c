#include<stdio.h>
main()
{
    char str[30];
    scanf("%[^\n]",str);
    char sub_str[10];
    scanf(" %[^\n]",sub_str);
    int len= strlen(str);
    int sub_len=strlen(sub_str);
    int j=0,flag=0;

    for(int i=0;i<len;i++)
    {
        if(str[i]==sub_str[j])
        {
            j++;
        }
        else
        {
            i=i-j;
            j=0;
        }
        if(j==sub_len)
        {
            flag=1;
            printf("substring found");
            break;
        }
    }
    if(flag==0)
    {
        printf("not found");
    }
}
