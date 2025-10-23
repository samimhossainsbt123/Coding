//Array with Reversy  and palindrome and Yes/no
#include<stdio.h>
int main()
{
    int N,i,k;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(k=N-1;k>=0;k--)  // ulta dhek theke asbo tobe n-1 karon 0 theke suru n-1 er ag porjonto scan nissi ,,tai n-1 theke suru korbo
    {
        printf("%d ",A[k]);
    }
    if(A[i]!=A[k])  // jodi scanf and printf soman hoy
    {
        printf("\nNO\n");
    }
    else
    {
        printf("\nYES\n");
    }
     return 0;
      
}
