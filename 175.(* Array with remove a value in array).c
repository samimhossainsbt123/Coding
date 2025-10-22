// Array with remove a value in array
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int A[N-1];   // jehuto scanf N er age porjonto nitassi are remove korle 1 ghor emnitei kome tai N-1 niya raklam tobe etao kintu uttor theke ek bessi
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);   // sadaron niome ager moto
    }
    int idx;
    scanf("%d",&idx);
    for(i=idx;i<N-1;i++)   /// jei ghor bad dibo oi gor  theke suru korbo
    {
        A[i]=A[i+1];   // jeta bad dibo oi ghor theke suru korbo,,, oi ghore er porer ghorer man bosavo ei bhabe cholte thakbe
    }
  
    for(i=0;i<N-1;i++)   // print sadron niomer hoyar kotha jehuto ek ghor emnitei kom print hoy 0 theke suru hoyar karone
                         // abr ekta remove korbo tai 2 ghor kombe i<N-1 emnitei 1 kom abr N-1 mane 2 ghor kom hobe
        printf("%d ",A[i]);
    
    
    return 0;
      
}
