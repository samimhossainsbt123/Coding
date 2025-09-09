// 1-2+3-4+5-6....+num1-num2
#include<stdio.h>
int main()
{
   int i=1,j=2,num1,num2,sum=0;
   scanf("%d",&num1);
   scanf("%d",&num2);
   while(i<=num1 && j<=num2)
  {
    sum=sum+((sum+i)-(sum+j));
    i=i+2;
    j=j+2;
  }
  printf("%d\n",sum);
   return 0;
}

