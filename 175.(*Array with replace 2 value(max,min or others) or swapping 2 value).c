// Array with replace 2 value(max,min or others) or swapping 2 value
#include <stdio.h>

int main() {
     
    int N,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {   
          
            scanf("%d",&A[i]);  
    }

    int max=A[0],min=A[0];
    int max_idx=0,min_idx=0;  // idx=koto tomo position(mone rakbo sadaron bhabe korle shudu max=0,kintu array soho korle max,max_idx(pos) soho lage
   for(i=1;i<N;i++)
   {
     if(max<A[i])
    {
        max=A[i];
        max_idx=i;
    }
   
    if(min>A[i])
    {
        min=A[i];
        min_idx=i;
    }
   }
    int temp; /// swappin 2 value (max,min)
    temp=A[max_idx];
    A[max_idx]=A[min_idx];
    A[min_idx]=temp;
   
  for(i=0;i<N;i++) // sob print korbo
     
    {     

    printf("%d ",A[i]);

    }
    return 0;
}
