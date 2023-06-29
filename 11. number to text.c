#include<stdio.h>
#include<string.h>
char number[10][15]={" ","one","two","three","four","five","six","seven","eight","nine"};
char second1[10][15]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char second2[10][15]={" "," ","twenty","thirty","fourty","fifty","sixty","sevventy","eighty","ninety"};
char link[4][10]={" "," "," Hundred "," Thousand "};

int main()
{
  int num,digit=0,i=0,a[10];
  char result[100]="\0";
  scanf("%d",&num);
  while(num!=0)
  {
      a[i++]= num%10;
      num=num/10;
  }

  for(int j=i-1;j>=0;j--)
  {
    if(j!=1)
    {
     strcat(result,number[a[j]]);
     if(a[j]!=0)
     {
       strcat(result,link[j]);
     }

    }
    else
    {
        if(a[j]==1)
        {
            strcat(result,second1[a[--j]]);
        }
        else
        {
            strcat(result,second2[a[j]]);
        }
    }
  }
  printf("%s",result);

  return 0;
}
