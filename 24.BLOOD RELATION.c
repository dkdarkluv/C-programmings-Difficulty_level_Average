#include<stdio.h>

struct person
{
    char child[20];
    char father[20];
};
int main()
{
    int n;
    char grandfather[20],son[20];
    scanf("%d",&n);
    struct person p[n];

    for(int i=0;i<n;i++)
    {
        printf("\nChild %d :",i);
        scanf("%s",p[i].child);
        printf("Father %d :",i);
        scanf("%s",p[i].child);
    }
    printf("Grandfather name :");
    scanf("%s",grandfather);

    for(int)
}
