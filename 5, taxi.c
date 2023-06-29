#include<stdio.h>
struct taxi
{
    int taxi_num;
    char current_loc;
    char history[10];
    int earnings;
    int history_count;
}t[5];

char location[]={'A','B','C','D','E'};

//check taxi available
int isavailable(char pickup, char destination)
{
   // printf("entered in to available............");
    int salary,taxi_num,count=0;
    for(int i=0;i<5;i++)
    {

        if(t[i].current_loc == pickup)
        {
           // printf("match pick up point is %c",t[i].current_loc);
            count++;
            if(count==1)
            {
                salary=t[i].earnings;
                taxi_num=i;
            }
            else
            {
                if(t[i].earnings<=salary)
                {
                    salary=t[i].earnings;
                    taxi_num=i;
                }
            }
        }
    }
    if(count==0)
    {
        taxi_num=-1;
    }
   else
    {
        t[taxi_num].history_count++;
        t[taxi_num].history[t[taxi_num].history_count]=destination;
        t[taxi_num].current_loc=destination;
    }
    return taxi_num;
}
//COST FOR THE RIDE
int amount(char pickup , char destination)
{
    int start,end,diff,sum=0;
    for(int i=0;i<5;i++)
    {
        if(pickup==location[i])
        {
            start=i;
        }
        if(destination == location[i])
        {
            end=i;
        }
    }
    diff= (start*15)-(end*15);
    if(diff<0)
    {
        diff=(-1*diff);
    }
    for(int i=1;i<=diff;i++)
    {
        if(i<=5)
        {
            sum=sum+100;
        }
        else
        {
            sum=sum+10;
        }
    }

    return sum;
}
int main()
{
    //INITIALIZE TAXI
    for(int i=0;i<5;i++)
    {
        printf("taxi number %d :",i);
        scanf("%d",&t[i].taxi_num);
        printf("current location of %d :",i);
        scanf(" %c",&t[i].current_loc);
        t[i].earnings=0;
        t[i].history[0]=t[i].current_loc;
        t[i].history_count=0;
    }

    //customer user interface

    int choice;
    char pickup,destination;
    while(1)
    {
        printf("press 1. for ride\n 2. history of taxi\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
               printf("enter the pick up point :");
               scanf(" %c",&pickup);
               printf("enter the destination poin :");
               scanf(" %c",&destination);
               int allocated_taxi=isavailable(pickup,destination);
               if(allocated_taxi!=-1)
               {
                   printf("------taxi number %d is allocated for you-----\n",allocated_taxi);
                   int cost= amount(pickup,destination);
                   printf("your taxi fare is RS.%d\n",cost);
                   t[allocated_taxi].earnings=t[allocated_taxi].earnings+cost;

               }
               else
               {
                   printf("no taxi is available at the moment\n");
               }
               break;
            }
            case 2:
            {
                int find_taxi;
                printf("enter the taxi num for history :");
                scanf("%d",&find_taxi);
                for (int i=0;i<=t[find_taxi].history_count;i++)
                {
                    printf("%c ",t[find_taxi].history[i]);
                }
                break;
            }
        }
    }

}
