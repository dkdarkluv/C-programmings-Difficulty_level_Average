#include<stdio.h>
#include<string.h>
struct dk
{
    int num;
    int weight;
};
int isnum(char c)
{
    if(c>='0' && c<='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int square(int n)
{
    float f;
    int d;
    f= sqrt(n);
    d=f;
    if(d==f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void find_weights(struct dk num_weight[],int count)
{
    for(int i=0;i<count;i++)
    {
        num_weight[i].weight=0;
        if(square(num_weight[i].num)==1)
        {
            num_weight[i].weight=num_weight[i].weight+5;
        }
        if(num_weight[i].num%4==0 && num_weight[i].num%6==0)
        {
            num_weight[i].weight=num_weight[i].weight+4;
        }
        if(num_weight[i].num%2==0)
        {
            num_weight[i].weight=num_weight[i].weight+3;
        }

    }

}

void sorting(struct dk num_weight[], int count)
{
    struct dk temp;
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(num_weight[i].weight>num_weight[j].weight)
            {
                temp=num_weight[i];
                num_weight[i]=num_weight[j];
                num_weight[j]=temp;
            }
        }
    }
}

int main()
{
    char str[20];
    scanf("%s",str);
    struct dk num_weight[strlen(str)-1];
    int count=0,sum=0;
    for(int i=1;i<strlen(str);i++)
    {
        if(isnum(str[i])==1)
        {
            sum= sum*10 + str[i]-48;
        }
        else
        {
            num_weight[count++].num=sum;
            sum=0;
        }
    }
    find_weights(num_weight,count);
    sorting(num_weight,count);

    for(int i=0;i<count;i++)
    {
        printf("num : %d   weight  : %d\n",num_weight[i].num,num_weight[i].weight);
    }
}
