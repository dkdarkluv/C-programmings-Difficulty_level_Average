#include<stdio.h>
int main()
{
    int num,rem,count=0;
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%2;
        if(rem==1)
        {
            count++;
        }
        num=num/2;
    }
    printf("%d",count);
    return 0;
}
