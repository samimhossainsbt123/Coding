//Two num Sum,Multiple,Subtraction,Remainder
#include<stdio.h>
int main()
{
  int num1,num2,result;

  scanf("%d%d",&num1,&num2);
 result=num1+num2;

  printf("Sum=%d\n",result);
   result=num1-num2;

  printf("Subtraction =%d\n",result);
   result=num1*num2;

  printf("Multiple=%d\n",result);
   
   result=num1%num2;

  printf("Remainder=%d\n",result);
                                 
  return 0;
}
