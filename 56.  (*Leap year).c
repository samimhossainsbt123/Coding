//Leap year
#include<stdio.h>
int main()
{  
   int num;
   scanf("%d",&num);
   if(num%400==0)
   {
    printf("Leap year\n");
   }
   else if(num%4==0 && num%100!=0)
   {
       printf("Leap year\n");
   }
   else
   {
     printf("Not Leap year\n");
   }
 
   return 0;
}


