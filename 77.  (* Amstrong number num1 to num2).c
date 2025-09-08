// Amstrong number num1 to num2
#include<stdio.h>
int main()
{
    int sum=0,initial,final,temp,rem,i;
    scanf("%d",&initial);
    scanf("%d",&final);
    for(i=initial;i<=final;i++)
   {
      temp=i;
    while(temp!=0)
    {
     rem=temp%10;
     sum=sum+rem*rem*rem;
     temp=temp/10;
    }
   if(i==sum)
   {
     printf("Amstrong numbers=%d\n",i);
   }
      sum=0;
   }

    return 0;
   
}

