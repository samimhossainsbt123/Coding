// Amstrong number
#include<stdio.h>
int main()
{
    int sum,num,temp,rem;
     for(num=1;num<=1000;num++)
   {
      sum=0;
   temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum =sum+rem*rem*rem;
        temp=temp/10;
   }
  if(num==sum)
   printf("%d\n",num);

}
}