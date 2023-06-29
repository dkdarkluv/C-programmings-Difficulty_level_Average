#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
int reverse(int num)
{
    int rem,sum=0;
    while(num!=0)
    {
       rem=num%10;
       num=num/10;
       sum = sum*10 + rem;
    }
    return sum;
}
int palindrome(int num)
{
    int rev= reverse(num);
    if(rev==num)
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
    int num,rev,sum=0,pal,count=0;
    scanf("%d",&num);
    while(count<5)
    {
        rev =reverse(num);
        sum= num+rev;
        pal =palindrome(sum);
        if(pal==1)
        {
            printf("palindrome\n");
            printf("sum= %d count=%d",sum,count);
            break;
        }
        else
        {
            num=sum;
            sum=0;
            count++;
        }
    }
    if(count>=5)
    {
        printf("not a palindrom");
    }

    return 1;
}
