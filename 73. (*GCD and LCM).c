// GCD and LCM
#include<stdio.h>
int main()
{
    int gcd,lcm,num1,num2,original1,original2,rem;
    scanf("%d%d",&num1,&num2);
    original1=num1;
    original2=num2;
    while(num2!=0)
    {
     rem=num1%num2;
     num1=num2;
     num2=rem;
    }
    gcd=num1;
    lcm=(original1*original2)/gcd;
    printf("gcd=%d\n",gcd);
    printf("lcm=%d\n",lcm);
    return 0;
}

