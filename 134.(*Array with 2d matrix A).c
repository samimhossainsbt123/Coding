// Array with 2d matrix A
#include <stdio.h>

int main() {
     
    int A[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n A=  ");
     for(i=0;i<3;i++)
    {    
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}
