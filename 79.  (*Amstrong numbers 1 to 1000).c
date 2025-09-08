// Amstrong numbers 1 to 1000
#include<stdio.h>
int main()
{
    int sum=0,temp,rem,i;
   ;
    for(i=1;i<=1000;i++)
   {
      temp=i;
    while(temp!=0)
    {
     rem=temp%10;
     sum=sum+rem*rem*rem;
     temp=temp/10;
    }
   if(i==sum)
   {
     printf("Amstrong numbers=%d\n",i);
   }
      sum=0;
   }

    return 0;
   
}

