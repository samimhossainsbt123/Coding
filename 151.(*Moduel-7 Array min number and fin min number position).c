// Moduel-7 Array min number and fin min number position
#include<stdio.h>
int main()
{
    int N,i,lowest,pos=-1;
    
    scanf("%d",&N);
    int A[N];
    
     
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    lowest=A[0];
    for(i=1;i<N;i++)
     {
        if(lowest>A[i])
        {
            lowest=A[i];
        }
        
     }
     printf("%d ",lowest);
    
     
      
     for(i=0;i<N;i++)
     {
        if(lowest==A[i])
        {
            pos=i+1;
            break;
        }
     }
    
    if(pos==-1)
    {
        printf("");
    }
    else
    {
   
    printf("%d ",pos);
    }
    return 0;
      
}
