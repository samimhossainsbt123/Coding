//Array with Reversy  and palindrome and Yes/no
#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=N-1;j>=0;j--)  // ulta dhek theke asbo tobe n-1 karon 0 theke suru n-1 er ag porjonto scan nissi ,,tai n-1 theke suru korbo
    {
        printf("%d ",A[j]);
    }
    if(A[i]==A[j])  // jodi scanf and printf soman hoy
    {
        printf("\n Yes ,palindrome\n");
    }
    else
    {
        printf("\nNot palindrome\n");
    }
     return 0;
      
}
