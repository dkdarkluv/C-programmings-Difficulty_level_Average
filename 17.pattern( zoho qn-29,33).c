 #include<stdio.h>
 int main()
 {
    char str[]="PROGGRAM";
    int len=strlen(str);
    int l_ptr=0,r_ptr=len-1,count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(j==l_ptr || j==r_ptr)
            {
                printf("%c",str[j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(l_ptr<r_ptr && count==0)
        {
            l_ptr++;
            r_ptr--;
        }
        else
        {
            l_ptr--;
            r_ptr++;
            count=1;
        }
    }
 }
