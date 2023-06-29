#include<stdio.h>
int main()
{
    int arr1[]={0,2,4,6,8};
    int arr2[]={1,3,5,7,9};
    int i=0,j=0,len1,len2,count=0,i_flag=0,j_flag=0;
    len1=(sizeof(arr1)/sizeof(int));
    len2=(sizeof(arr2)/sizeof(int));
    int res_arr[len1+len2];
    while(1)
    {
        if(arr1[i]<=arr2[j])
        {
            res_arr[count++]=arr1[i];
            i++;
            if(i==len1)
            {
                i_flag=1;
                break;
            }
        }
        else
        {
            res_arr[count++]=arr2[j];
            j++;
             if(j==len2)
            {
                j_flag=1;
                break;
            }
        }
    }
    if(i_flag==1)
    {
        for(int l=j;l<len2;l++)
        {
            res_arr[count++]=arr2[l];
        }
    }
    else
    {
       for(int m=i;m<len1;m++)
        {
            res_arr[count++]=arr1[m];
        }
    }


    for(int k=0;k<count;k++)
    {
        printf("%d ",res_arr[k]);
    }



    return 0;
}
