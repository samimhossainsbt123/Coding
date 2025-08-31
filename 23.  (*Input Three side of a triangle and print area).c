//  Input Three side of a triangle and print area
#include<stdio.h>
int main()
{
  float num1,num2,num3,sum,avg;


  scanf("%f%f%f",&num1,&num2,&num3);
  sum=num1+num2+num3;
  avg=(float)sum/3;

  printf("Average=%f\n",avg);
   
                                 
  return 0;
}

