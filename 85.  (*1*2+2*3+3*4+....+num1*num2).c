// 1*2+2*3+3*4+....+num1*num2
#include<stdio.h>
int main()
{
   int i=1,j=2,num1,num2,sum=0;
   scanf("%d",&num1);
      scanf("%d",&num2);
   while(i<=num1 && j<=num2)
   {
    sum=sum+(i*j);
    i++;
    j++;
   }
    printf("Sum=%d\n",sum);
    return 0; 
}
