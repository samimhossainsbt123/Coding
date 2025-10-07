// Array with input num and find minimum number
#include <stdio.h>
 int main()
 {
     int num[100],n,min,i;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        scanf("%d",&num[i]);
     }
     min=num[0];
     for(i=1;i<n;i++)
     {
        if(min>num[i])
        {
            min=num[i];
        }
     }
     printf("%d\n",min);
     return 0;
}
