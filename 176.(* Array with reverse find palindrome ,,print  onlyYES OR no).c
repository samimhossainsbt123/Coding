// Array with reverse find palindrome ,,print only YES OR no
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;  /// jekono ekta man age nimu
    for(int l=0,r=n-1;l<r;l++,r--)
    {
        if(a[l]!=a[r])
        {
            j=1 ;  /// man ta jodi poriborton hoy taholei bujbo condition mantasssena somossa 
            break;
        }
    }
    if(j==1)
    {
        printf("NO");
    }

    else 

    {
        printf("YES"); 
    }

}
