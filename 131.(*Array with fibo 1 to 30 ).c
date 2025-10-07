// Array with fibo 1 to 30 
#include <stdio.h>
 int main()
 {
     int num[100],n=9,fibo,i;       // 1 to 30 fibonacci  mot 9 ta hoy tai n=9
    
     num[0]=0;                     // kono scanf lagena karon uto man berbe man nite hoyna
     num[1]=1;
   
     for(i=2;i<n;i++)              // karon agei duita o,1 nissi tai 2 theke suru korbo
     {
        num[i]=num[i-1]+num[i-2];
     }
     for(i=0;i<n;i++)            // print soboi korbo jegulo nissi oigulow tai o theke nissi
     {
          printf("%d ",num[i]);
     }
     return 0;
}
