// 1+3+5+7+...+num
#include<stdio.h>
int main()
{
   int i,num,sum=0;
   scanf("%d",&num);
   for(i=1;i<=num;i=i+2)
   {
    sum=sum+i;
   }
    printf("Sum=%d\n",sum);
    return 0; 
}

