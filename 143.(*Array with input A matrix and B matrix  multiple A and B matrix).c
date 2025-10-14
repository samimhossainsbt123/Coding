// Array with input A matrix and B matrix  multiple A and B matrix


#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,k,r1,c1,r2,c2,sum=0;
    scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
      printf("\n Error.\n Beacuse A matrix r1 not equal to b matrix c1");
      scanf("%d%d",&r1,&c1);
      scanf("%d%d",&r2,&c2);
    }



    // A matrix scanf
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
      }
      printf("\n");
    }


     // scanf B matrix
     for(i=0;i<r2;i++)
    
    {
      for(j=0;j<c2;j++)
      {
        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
      }
      printf("\n");
    }
      

    printf("\n A=  ");
     for(i=0;i<r1;i++)
    {
      printf("\t");
      for(j=0;j<c1;j++)
      {
        printf("%d ",A[i][j]);
        
      }
      printf("\n");
    }


    printf("\n B=  ");
     for(i=0;i<r2;i++)
    {
      printf("\t");
      for(j=0;j<c2;j++)
      {
        printf("%d ",B[i][j]);
        
      }
      printf("\n");
    }

    // muliple formula
     for(i=0;i<r1;i++)
    
    {
      for(j=0;j<c2;j++)
      {
        for(k=0;k<c1;k++)
        {
          sum=sum+A[i][k]*B[k][j];
        }
        C[i][j]=sum;// mone rakbo  ei duita porer line
          sum=0;
        
      }
    
      
      printf("\n");
    }

    printf("\n C= ");
    for(i=0;i<r1;i++)
    
    {
      printf("\t");
      for(j=0;j<c2;j++)
      {
        printf("%d ",C[i][j]);
      }
      printf("\n");
    }
    return 0;
      
}
