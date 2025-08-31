//  Input Three side of a triangle and print area
#include<stdio.h>
int main()
{
 float a,b,c,s,area;

  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area=%f\n",area);
   
                                 
  return 0;
}

