// Array with scanf input change one array size and reverse array
#include<stdio.h>
int main()
{
    int N,i,X,V;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&X,&V);
    A[X]=V;
   
    
  for(i=N-1;i>=0;i--)
    {
        printf("%d ",A[i]);
    }
    
    

    return 0;
}   
