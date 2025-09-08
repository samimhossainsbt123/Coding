// Prime number with sqrt
#include<stdio.h>
int main()
{
    int num,i,count=0;
    scanf("%d",&num);  
    if(num<=1)
    {
     printf("Not a prime number\n");
     return 0;   //eta obossoi dibo eta na dile 2 ta print hobe tai eta obossoi dibo
    }
    for(i=2;i<sqrt(num);i++)
    {
     if(num%i==0)
     {
      count++;// prime manei count dibo
     break;
     }
    }  
    if(count==0)
    {
     printf("Prime number\n");
    }
    else
    printf("Not a prime number\n");
    return 0;
}
