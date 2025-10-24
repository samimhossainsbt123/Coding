//  Array 2 array a[n],b[m], duitar man jog kore c[n+m]print korbo
#include<stdio.h>
int main()
{
     int n,i;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);   // prothom ekta sompurno scanf korbo sadaron bhabe

     }
        int m,j;
     scanf("%d",&m);
     int b[m];
     for(i=0;i<m;i++)
     {
        scanf("%d",&b[i]);  //pore arekta sompurno scanf korbo sadaron bhabe
        
     }
     int c[n+m];  // 2 ta ek satte korbo tai jayga hobe duitar jog er soman
     for(i=0;i<n;i++)
     {
        c[i]=a[i];  // prothomtar soman kore print korbo
     }
      for(i=0;i<n;i++)
     {
       printf("%d ",c[i]);// prothom a print korbo
     }
      for(j=0;j<m;j++)
     {
        c[j+n]=b[j];// prothomtar por theke suru tai porertar satte n jog korar porer ghor theke hoy
     }
      for(j=0;j<m;j++)
     {
         printf("%d ",c[j+n]); // pore b print korbo after prin a
     }
    return 0;
      
}
