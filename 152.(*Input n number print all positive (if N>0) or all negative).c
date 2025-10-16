// Input n number print all positive (if N>0) or all negative
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
     if(N>0)
    {
        for(i=1;i<=N;i++)
      {
       
        {
            printf("%d ",i);
        }

       }
    }
    else if(N<0)
    {
         for(i=N;i<=0;i++)
    {
         printf("%d ",i);
    }

    }
    else
    {
        printf("0");
    }
    
    return 0;
      
}
