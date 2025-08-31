//Different Grade
#include<stdio.h>
int main()
{  
 int num;
 scanf("%d",&num);
 if(num<0 || num>100)
{
  printf("Inavlid marks\n");
}
else if(num<=100 && num>=80)
{
  printf("A+\n");
}
else if(num<=79 && num>=70)
{
  printf("A\n");
}
else if(num<=69 && num>=60)
{
  printf("A-\n");
}
else if(num<=59 && num>=50)
{
  printf("B\n");
}
else if(num<=49 && num>=40)
{
  printf("C\n");
}
else if(num<=39 && num>=33)
{
  printf("D\n");
}
else 
{
  printf("Fail\n");
}

   return 0;
}


