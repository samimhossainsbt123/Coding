#include<stdio.h>
int main()
{
    int ar1[100][100];
    int row;
    int col;
    int i,j;
    int sum=0;
    scanf("%d",&row);
    scanf("%d",&col);
    while(row!=col)
    {
        printf("Error,again enter row,col\n");
        scanf("%d",&row);
         scanf("%d",&col);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d][%d]=",row,col);
            scanf("%d",&ar1[i][j]);
        }
         printf("\n");
    }
   
     for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",ar1[i][j]);
        }
        printf("\n");
    }
    // diagonal
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(i==j)
           {
            printf("%d \n",ar1[i][j]);
            sum=sum+ar1[i][j];

           }
        }
        
    }
    printf("sum=       %d",sum);
    

    return 0;
      
}
