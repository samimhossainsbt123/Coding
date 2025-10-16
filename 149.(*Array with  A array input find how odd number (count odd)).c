// Array with  A array input find how odd number (count odd)
#include <stdio.h>

int main() {
     
    int A[3],i,count=0;
    for(i=0;i<3;i++)
    {   
            printf("A[%d]= ",i);
            scanf("%d",&A[i]);  
    }
    printf("\n A=  ");
  for(i=0;i<3;i++)
     
    {     
       
    if(A[i]%2!=0)
    {
     ++count;  // break dibo na karon break dile shudu ektai print hoy
    
    }
    

    }
    printf("%d",count);
    return 0;
}
