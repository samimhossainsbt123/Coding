// Array  with 2D A matrix and B matrix sumation
#include<stdio.h>
int main()
{
    int A[3][4],B[3][4],C[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
      for(i=0;i<3;i++)
     {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
     {
        for(j=0;j<4;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }
    printf("\n A= ");
     for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n B= ");
     for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
          
        }
        printf("\n");
    }
     printf("\n C= ");
     for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",C[i][j]);
          
        }
        printf("\n");
    }
    return 0;
      
}
