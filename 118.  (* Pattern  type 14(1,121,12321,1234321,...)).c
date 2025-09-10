// Pattern  type 14(1,121,12321,1234321,...)
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)// space er jonno eta fixed
        {
            printf("  ");
        }
       
         for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
      for(col=row-1;col>=1;col--) // ei laine ta col <=row-1 eta bhinno mone rakbo
      {
           printf("%d ",col);
      }
    
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
