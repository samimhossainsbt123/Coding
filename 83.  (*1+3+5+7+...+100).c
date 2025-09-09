// 1+3+5+7+...+100
#include<stdio.h>
int main()
{
   int i,num=100,sum=0;
   for(i=1;i<=num;i=i+2)
   {
    sum=sum+i;
   }
    printf("Sum=%d\n",sum);
    return 0; 
}

