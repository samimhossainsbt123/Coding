// Array with 2D Matrix A & Matrix B
#include<stdio.h>
int main()
{
    int A[3][4],B[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);// eta mone rakbo
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
    printf("\n A= ");
     for(i=0;i<3;i++)
    {
        printf("\t"); // print er age eta dile boro space paoya jay
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
    return 0;
      
}
