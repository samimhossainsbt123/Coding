// 1^1+2^2+3^3+4^4+....+num1^num2
#include<stdio.h>
int main()
{
   int i,num,sum=0;
   scanf("%d",&num);
   for(i=1;i<=num;i++)
  {
    sum=sum+(i*i);
  }
  printf("%d\n",sum);
   return 0;
}

