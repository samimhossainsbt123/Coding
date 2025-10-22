// Array with insert number
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int A[N+1];   // jehuto scanf N er age porjonto nitassi are inerst er jonno 1 ghor bessi jayga lagbe tai A[N+1]jayga nibo
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);   // sadaron niome ager moto
    }
    int idx,val;
    scanf("%d%d",&idx,&val);
    for(i=N;i>=idx+1;i--)   /// ulta dhik theke kormu jei ghor bessi nisilam are eta khali tai uldta dhik theke sob gulo ek ghor pisaibo
    {
        A[i]=A[i-1];   // formula for insert ,,idx+1 porjonto karon jetai insert korbo tar 1 ghor porer porjonto jayga khali rakbo
    }
    A[idx]=val;
    for(i=0;i<=N;i++)   // sadaron print jehuto ekhon 1 ghor barse tai print Purapuri N porjonto print hobe
    {
        printf("%d ",A[i]);
    }
    return 0;
      
}
