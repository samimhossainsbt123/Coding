// Strong number
#include<stdio.h>
int main()
{
    int num,sum,i,rem,temp,fact=1;
    scanf("%d",&num);
    temp=num;
     while(temp!=0)
     {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
     }

     if(sum==num)
     {
        printf("Strong Number\n");
     }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;
   
}

