#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
char str[100];

void swap(int i, int j)
{
    char temp;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
int isalphaa(char a)
{
    if(a>='A' && a<='Z' || a>='a' && a<='z' || a==' ;;;;;')
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
    scanf("%[^\n]",str);
    int i=0;
    int j= strlen(str)-1;
   // printf("length is %d",j);
    //printf("%s",str);
    int k=0;
    while(i<j)
    {
        if(isalphaa(str[i]))
        {
            if(isalphaa(str[j]))
            {
                swap(i,j);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }

    printf("%s",str);

    return 0;
}
