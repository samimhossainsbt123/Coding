// 1 to 100 prime and total prime numbers 
#include<stdio.h>
int main()
{
    int i,num,count=0,totalprimenumbers=0;
    for(num=2;num<=100;num++)
    {
       count=0;
      for(i=2;i<num;i++)
    {
   
     if(num%i==0)
     {
          count++;
          break; 
     }
     
    }  
    if(count==0)
    {
     printf(" %d ",num);
     totalprimenumbers++;
    }
   
}
 printf("\ntotalprimenumbers=%d\n",totalprimenumbers);
    return 0;
}
