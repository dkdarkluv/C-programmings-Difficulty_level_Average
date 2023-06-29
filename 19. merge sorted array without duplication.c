 #include <stdio.h>

int main()
{
    int arr1[]={1,3,5,6,7};
    int arr2[]={2};
    int len1= (sizeof(arr1)/sizeof(int));
    int len2= (sizeof(arr2)/sizeof(int));
    int res_arr[len1+len2+2];
    int i=0,j=0,count=0,flag1=0,flag2=0;

    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            //printf("i :%d  a[i] :%d\n",i,arr1[i]);
            res_arr[count++]=arr1[i];
            i++;

        }
        else if(arr2[j]<arr1[i])
        {
         //   printf("j :%d  a[j] :%d\n",j,arr2[j]);
            res_arr[count++]=arr2[j];
            j++;

        }
        else
        {
          //  printf("i :%d j :%d  a[i] :%d a[j] :%d\n",i,j,arr1[i],arr2[j]);
            res_arr[count++]=arr1[i];
            i++;
            j++;
        }
        if(i==len1)
        {
            flag1=1;
        }
        if(j==len2)
        {
            flag2=1;
        }
    }
    if(flag1==1)
    {
        for(int k=j;k<len2;k++)
        {
            res_arr[count++]=arr2[k];
        }
    }
    else
    {
        for(int k=i;k<len1;k++)
        {
            res_arr[count++]=arr1[k];
        }

    }
    printf("the result is :");
    for(int k=0;k<count;k++)
    {
        printf("%d",res_arr[k]);
    }
    return 0;
}
