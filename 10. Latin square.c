#include<stdio.h>
int main()
{
    int num,cpy=1;
    scanf("%d",&num);
    int start=1;
    for(int row=num; row>0; row--)
    {
        for(int i=start;i<=num;i++)
        {
            printf("%d",i);
        }
        start++;
        for(int i=1; i<cpy;i++)
        {
            printf("%d",i);
        }
        cpy++;
        printf("\n");
    }
    return 0;
}
