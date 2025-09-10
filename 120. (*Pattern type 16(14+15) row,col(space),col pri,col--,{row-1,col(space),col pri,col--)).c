// Pattern type 16(14+15) row,col(space),col pri,col--,{row-1,col(space),col pri,col--)
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)    // space er jonno eta fixed
        {
            printf("  ");
        }
       
         for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
      for(col=row-1;col>=1;col--)
      {
           printf("%d ",col);
      }
       printf("\n");    //for row er je braccet asse tar modde rakbo
    }
        for(row=num-1;row>=1;row--)
       {
        for(col=1;col<=num-row;col++)   // space er jonno eta fixed
        {
            printf("  ");
        }
       
         for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
      for(col=row-1;col>=1;col--)
       {
           printf("%d ",col);
       }
        printf("\n");    //for row er je braccet asse tar modde rakbo
    }
    return 0;
}

     
