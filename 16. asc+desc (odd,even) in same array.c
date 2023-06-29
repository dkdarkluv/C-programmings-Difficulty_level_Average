#include<stdio.h>
main()
{
    int a[]={5,8,11,6,2,1,7};
    int len=(sizeof(a)/sizeof(int))-1;
    int temp;
    for(int i=0;i<=len;i++)
    {
        for(int j=i+1;j<=len;j++)
        {
            if(a[i]>a[j] && a[j]%2!=0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=len;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>a[j] && a[j]%2==0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(int i=0;i<=len;i++)
    {
        printf("%d ",a[i]);
    }
}
