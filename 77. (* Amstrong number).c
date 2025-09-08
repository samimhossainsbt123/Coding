// Amstrong number
#include<stdio.h>
int main()
{
    int sum=0,num,temp,rem;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
     rem=temp%10;
     sum=sum+rem*rem*rem;
     temp=temp/10;
    }
   if(num==sum)
   {
     printf("Amstrong numbers\n");
   }
   else 
   printf("Not amstrong  numbers\n");
    return 0;
}
