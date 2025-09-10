// Patter type 15 (12321,121,1..)row,space(col),col,col(row-1..)
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
 
        for(row=num-1;row>=1;row--)
       {
        for(col=1;col<=num-row;col++)// space er jonno eta fixed
        {
            printf("  ");5
        }
       
         for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
      for(col=row-1;col>=1;col--)
       {
           printf("%d ",col);
       }
    
    
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}

     
