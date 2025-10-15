// Array with matrix convert transpose matrix
#include<stdio.h>
int main()
{
   int matrix[10][10],transpose[10][10],row,col,i,j;  //
   scanf("%d%d",&row,&col);
   for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
    {
        printf("matrix[%d][%d]= ",i,j);
        scanf("%d",&matrix[i][j]);
    }
    printf("\n");
   }
   printf("\nmatrix=\n");
   for(i=0;i<row;i++)
   {
    printf("\t");
    for(j=0;j<col;j++)
    {
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
   }
     for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
    {
      transpose[j][i]=matrix[i][j];     // formula lekhar somoi transpose[j][i]
    }
    printf("\n");
   }
   printf("\ntranspose=\n");
        for(i=0;i<col;i++)
   {
      printf("\t");
    for(j=0;j<row;j++)
    {
    printf("%d ",transpose[i][j]);  // print korar somoi transpose[i][j]
    }
    printf("\n");
   }
   return 0;
   

}
