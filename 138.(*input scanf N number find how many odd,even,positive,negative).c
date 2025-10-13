// input scanf N number find how many odd,even,positive,negative
#include<stdio.h>
int main()
{
    int N,x,i,Odd=0,Even=0,Positive=0,Negative=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            Even++;
          
        }
         else if(x%2!=0)
        {
            Odd++;
        }
        if(x>0)
        {
            Positive++;
        }
        if(x<0)
        {
            Negative++;
        }
    }
        
         printf("Even: %d\n",Even);
         printf("Odd: %d\n",Odd);
          printf("Positive: %d\n",Positive);
           printf("Negative: %d\n",Negative);
    
    return 0;
      
}
