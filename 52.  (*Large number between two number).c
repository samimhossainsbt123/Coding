//Large number between two number
#include<stdio.h>
int main()
{
   int num1,num2;
   scanf("%d%d",&num1,&num2);
   if(num1>num2)
  {
    printf("Large =%d",num1);
  }
  else if(num2>num1)
  {
    printf("Large=%d\n",num2);
  }
  else
  {
    printf("Numbers are equal\n");
  }
  
 
   return 0;
}


