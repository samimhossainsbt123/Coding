// Array with input A array find  how even number(count)
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
       
    if(A[i]%2==0)
    {
     ++count;   // break dibo na karon break dile ektai print hove
    
    }
    

    }
    printf("%d",count);
    return 0;
}
