#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
 char str[10],temp;
 scanf("%s",str);
 int j=strlen(str)-1,i=0;
 while(i<j)
 {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
 }

 printf("%s",str);
}
