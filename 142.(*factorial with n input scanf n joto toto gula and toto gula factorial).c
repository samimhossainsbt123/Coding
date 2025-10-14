// factorial with n input scanf n joto toto gula and toto gula factorial
#include<stdio.h>
int main()
{
   int N,x,fact=1,i,j;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
    scanf("%d",&x);
    fact=1;          // karonekta sesh kore punoray dhorte hobe tay
    for(j=1;j<=x;j++)
    {
        fact=fact*j;
       
        
    }
    printf("%d\n",fact);

   
   }
        

    return 0;
      
}
