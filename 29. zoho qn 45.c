#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_square(int n)
{
    float m= sqrt(n);
    int k=m;

    if(m==k)
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
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    {
        if(is_square(i)==1)
        {
            printf("%d ",i);
        }
    }
}
