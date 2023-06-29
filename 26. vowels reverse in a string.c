#include<stdio.h>
int isvowel(char c)
{
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' )
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
    char str[10],temp;
    scanf("%s",str);
    int len=strlen(str);
    int i=0,j=len-1;
    while(i<j)
    {
        if(isvowel(str[i])==1  && isvowel(str[j])==1)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        else if(isvowel(str[i])==1  && isvowel(str[j])!=1)
        {
            j--;
        }
        else if(isvowel(str[i])!=1  && isvowel(str[j])==1)
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    printf("%s",str);
    return 0;
}
