

#include <stdio.h>

int main()
{
    int num,a[10],count=0,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
       a[count]=num%10;
       if(count!=0)
       {
        sum= sum+(a[count]*2);
       }
       num=num/10;
       count++;
    }
    int ans=sum/(count-1);

    if(ans==a[0])
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
