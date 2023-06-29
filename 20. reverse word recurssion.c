#include<stdio.h>
#include<string.h>
int start=0,end=0;
int isspaces(char *str2)
{
    int flag=0,i=0;
    //printf("%d\n",strlen(str2));
    while(i<strlen(str2)-1)
    {
        if(str2[i]==' ')
        {
            flag=1;
            break;
        }
        else
        {
            i++;
        }
    }

    if(flag==1)
    {
        end=i;
        return 1;
    }
    else
    {
        return 0;
    }
}


void fun(char *str1)
{
    int i;
    if(isspaces(str1)==1)
    {
        start=end;
        fun(str1+end+1);
        for(i=start;str1[i]!=' ';i++)
        {
          printf("%c",str1[i]);
        }
        printf(" ");
        start =++i;
    }
    else
    {
        for(i=end;str1[i]!='\0';i++)
        {
           printf("%c",str1[i]);
        }
        printf(" ");
        return;
    }
}
int main()
{
    char str[]="one two three";
    fun(str);
    return 0;
}
