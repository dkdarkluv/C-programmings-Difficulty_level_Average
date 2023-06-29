#include<stdio.h>
int first=0,second=0;
int a[10],temp;
int main()
{

    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    //DOUBLE FOR LOOP O(N2)
   /* for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[0]+a[1]);*/

    //SINGLE FOR LOOP O(N)

    for(int i=0;i<10;i++)
    {
        if(a[i]>second)
        {
            second=a[i];
            if(second>first)
            {
                temp=first;
                first=second;
                second=temp;
            }
        }
    }
    printf("%d",second+first);
    return 0;
}
