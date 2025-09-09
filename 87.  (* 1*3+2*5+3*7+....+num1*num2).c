// 1*3+2*5+3*7+....+num1*num2
#include<stdio.h>
int main()
{
   int i=1,j=3,num1,num2,sum=0;
   scanf("%d",&num1);
      scanf("%d",&num2);
   while(i<=num1 && j<=num2)
   {
    sum=sum+(i*j);
    i++;
    j=j+2;
   }
    printf("Sum=%d\n",sum);
    return 0; 
}
