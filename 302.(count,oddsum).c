#include<stdio.h>
int main()
{
    int num,temp,count=0,oddsum=0;
    int  digit;
    scanf("%d",&num);
    temp=(num<0)? -num:num;
    if(temp==0)
    {
        count=1;
    }
    else
    {
        while(temp!=0)
        {
            digit=temp%10;
            count++;
            if(digit%2!=0)
              {
                oddsum=oddsum+digit;

              }
          temp=temp/10;
        
        }
    }
    printf("total digit = %d\n",count);
    printf("total oddsum = %d",oddsum);
    return 0;
      
}
