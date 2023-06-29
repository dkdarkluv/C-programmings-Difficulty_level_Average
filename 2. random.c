#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[100];
int check(int num, int i)
{
    int flag=0;
    for(int j=0;j<i;j++)
    {
        if(a[j]==num)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{

    srand(time(0));

    for(int i=1; i<=10;i++)
    {
        if(i==1)
        {
            while(1)
                {
                    a[i]=rand()%10;

                    if(a[i]!=0 && check(a[i],i)==0)
                    {
                        break;
                    }
                }
            printf("number %d : %d\n",i,a[i]);
        }
        else if (i==2)
        {
            while(1)
            {
                a[i]= rand()%10;
                if(a[i]%2==0 && a[i]!=0 && check(a[i],i)==0)
                {
                    printf("number %d : %d\n",i,a[i]);
                    break;
                }
            }
        }
        else if (i==3)
        {
             while(1)
            {
                a[i]= rand()%10;
                if((a[i-2]+a[i-1]+a[i])%3==0  && a[i]!=0 && check(a[i],i)==0)
                {
                    printf("number %d : %d\n",i,a[i]);
                    break;
                }
            }
        }
        else if (i>=4 && i<=9)
        {
            while(1)
            {
                a[i]=rand()%10;
                if(a[i]!=0 && check(a[i],i)==0)
                {
                    break;
                }
            }
                printf("number %d : %d\n",i,a[i]);

        }
        else
        {
            a[i]=0;
            printf("number %d : %d\n",i,a[i]);
        }
    }

    long int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum= (sum*10)+a[i];
    }

    printf("%ld",sum);
 }

