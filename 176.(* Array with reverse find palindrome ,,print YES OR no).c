// Array with reverse find palindrome ,,print YES OR no
#include<stdio.h>
int main()
{
    int N,i,k;
    scanf("%d",&N);
    int A[N];
    for( i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    k=0;  /// jekono ekta man age nimu
    for(int l=0,r=N-1;l<r;l++,r--)
    {
        if(A[l]!=A[r])
        {
            k=1 ;  /// man ta jodi poriborton hoy taholei bujbo condition mantasssena somossa 
            break;
        }
    }
    if(k==1)
    {
        printf("NO");
    }

    else 

    {
        printf("YES"); 
    }

}
