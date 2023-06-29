#include<stdio.h>
struct num_count
{
    int num;
    int count;
};
int isavailable(int number, struct num_count* n,int count)
{
    for(int i=0;i<count;i++)
    {
        if(number==n[i].num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6,1,1,1,1,1,1,1,1,1,1,1,1,10,2,2,2,2,2,2,2,2};
    int len=sizeof(a)/sizeof(int);
    struct num_count n[len];
    int count=0,pos;

    for(int i=0;i<len;i++)
    {
        pos=isavailable(a[i],n,count);
        if(pos==-1)
        {
            n[count].num=a[i];
            n[count].count=1;
            count++;
        }
        else
        {
            n[pos].count++;
        }
    }

    for(int i=0;i<count;i++)
    {
        printf("num : %d   count : %d\n",n[i].num,n[i].count);
    }
}
