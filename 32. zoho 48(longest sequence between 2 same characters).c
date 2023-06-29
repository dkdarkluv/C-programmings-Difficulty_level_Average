#include<stdio.h>
int main()
{
    char str[20];
    scanf("%s",str);
    int len= strlen(str);
    int j=len-1,flag=0;

    for(int i=0;i<len;i++)
    {
        while(i<j)
        {
            if(str[i]==str[j])
            {
                printf("%d",j-i-1);
                flag=1;
                break;
            }
            else
            {
                j--;
            }
        }
        j=len-1;
        if(flag==1)
        {
            break;
        }
    }
}
