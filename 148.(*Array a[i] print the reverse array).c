// Array a[i] print the reverse array

#include <stdio.h>

int main() {
     
    int A[3],i;
    for(i=0;i<3;i++)
    {   
            printf("A[%d]= ",i);
            scanf("%d",&A[i]);  
    }
    printf("\n A=  ");
    for(i=2;i>=0;i--)
     
    {     

    printf("%d ",A[i]);

    }
    return 0;
}
