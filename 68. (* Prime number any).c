// Prime number any
#include<stdio.h>
int main()
{
    int num,i,count=0;
    scanf("%d",&num);  
    if(num<=1)
    {
     printf("Not a prime number\n");
     return 0;
    }
    for(i=1;i<=num;i++)
    {
     if(i%2==0)
     count++;
     break;
    }  
    if(count==0)
    {
     printf("Prime number\n");
    }
    else
    printf("Not a prime number\n");
    return 0;
}

