// 1+ (1/2) + (1/3) + (1/4)+... +(1/n)

#include<stdio.h>
int main()
{
   float i,num,sum=0;
   scanf("%f",&num);
   for(i=1;i<=num;i++)
  {
    sum=sum+(1/i);
  }
  printf("%f\n",sum);
   return 0;
}

