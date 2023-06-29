#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int space=num;
    int cpy=num,count=0;
    while(space>=0)
    {
        for(int i=0;i<space;i++)
        {
            printf("-");
        }
        for(int i=cpy;i<=num && count!=0;i++)
        {
            printf("%d",i);
        }
        printf("0");
        for(int i=num;i>=cpy && count!=0;i--)
        {
            printf("%d",i);
        }
        space--;
        if(count==0)
        {
            count++;
            printf("\n");
            continue;
        }
        cpy--;
        printf("\n");
    }
    return 0;
}
