// Array with matrix find diagonals of element
#include<stdio.h>
int main()
{
  int matrix[10][10],row,col,i,j,sum=0; 
  scanf("%d%d",&row,&col);
  while(row!=col)
  {
    printf("\n Error.Matrix row and col not eqaul");
    scanf("%d%d",&row,&col);

  }
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
       if(i==j)
       {
        printf("%d",matrix[i][j]);// eta na dileo hoy eta shudu dibo jate kongula jog korbo ta dhekabo
        sum=sum+matrix[i][j];
       }
    }
    printf("\n");
  }
  printf("sum of diagonals= %d",sum);
 
  return 0;
  
   

}
