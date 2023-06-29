#include<stdio.h>

int check(char *a, char *str)
{
    int len_a= strlen(a),flag=0;
    int len_str=strlen(str);
    int a_alpha[26],str_alpha[26];


    if(len_a==len_str)
    {
        for(int i=0;i<26;i++)
        {
            a_alpha[i]=0;
            str_alpha[i]=0;
        }
        for(int i=0;i<len_a;i++)
        {
            a_alpha[a[i]-'a']++;
        }
        for(int i=0;i<len_str;i++)
        {
            str_alpha[str[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(a_alpha[i]!=str_alpha[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}



int main()
{
    char array[8][10]={"catch","got","tiger","mat","eat","pat","tap","tea"};
    char str[]="ate";
    int size= sizeof(array)/10;

    for(int i=0;i<size;i++)
    {
        if(check(array[i],str)==1)
        {
            printf("%s\n",array[i]);
        }
    }
}
