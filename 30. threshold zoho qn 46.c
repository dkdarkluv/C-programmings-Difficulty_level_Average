#include<stdio.h>
struct num_parts
{
    int num;
    int parts;
};
int calculate_parts(int num,int t)
{
    int count=0;
    while(num>0)
    {
        num=num-t;
        count++;
    }
    return count;
}

int main()
{
    int a[]={5,8,10,13,6,2};
    int threshold=3,sum=0;
    int len= sizeof(a)/sizeof(int);
    struct num_parts n[len];

    for(int i=0;i<len;i++)
    {
        n[i].num=a[i];
        n[i].parts= calculate_parts(a[i],threshold);
    }

    for(int i=0;i<len;i++)
    {
        printf("num :%d  parts :%d\n",a[i],n[i].parts);
        sum=sum+n[i].parts;
    }
    printf("OUTPUT : %d",sum);
}
