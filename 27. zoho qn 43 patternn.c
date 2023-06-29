#include<stdio.h>

int main()
{
    char str[10];
    scanf("%s",str);
    int len= strlen(str)-1;
    int middle=len/2;
    int space=len;
    int second_half=middle;
    int first_half=0;
    int count=0;

    for(int i=0;i<=len;i++)
    {
        //space
        for(int j=0;j<=space;j++)
        {
            printf(" ");
        }
        space--;

        //half from middle

        for(int k=middle;k<=second_half;k++)
        {
            printf("%c",str[k]);
        }
        if(second_half<len)
        {
            second_half++;

        }
        else
        {
            count++;
            if(count!=1)
            {
                for(int m=0;m<=first_half;m++)
                {
                    printf("%c",str[m]);
                }
                first_half++;
            }
        }
        printf("\n");
    }

}
