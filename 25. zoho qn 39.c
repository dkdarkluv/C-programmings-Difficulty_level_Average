#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof(a)/sizeof(int);

    int temp;
    for (int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(i%2==0)
            {
                if(a[j]>a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
            else
            {
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }

    }


    for(int i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }

}
