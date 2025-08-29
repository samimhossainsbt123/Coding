//Any digit Sum
#include<stdio.h>
int main()
{
    int sum=0,num,temp,rem;
    scanf("%d",&num);
   temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum =sum+rem;
        temp=temp/10;
}
 printf("%d\n",sum);
}
