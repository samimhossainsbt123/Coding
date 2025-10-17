// Array input n a[] find odd array i er man odd and  odd number print reverse output

#include<stdio.h>
int main()
{
    int A[1000],N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       
        scanf("%d",&A[i]);
    }
     for(i=N;i>=0;i--)
    {
        if(i%2!=0)
        {
            if(A[i]>0)
            {
                printf("%d ",A[i]);
            }
        }
       
    }

    return 0;
      
}
