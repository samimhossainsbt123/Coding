// Pattern  type 12(type 10+11) 2*row-1 er dui side
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)
        {
          printf("   ");// 3 ta space dibo
        }

        
       for(col=1;col<=2*row-1;col++)// means row er man ar column er man ekoi hobe
        {
            printf(" * ");
        }
       
        printf("\n");//for row er je braccet asse tar modde rakbo
        }
         for(row=num-1;row>=1;row--)
    {
        for(col=1;col<=num-row;col++)
        {
          printf("   ");// 3 ta space dibo
        }

        
       for(col=1;col<=2*row-1;col++)// means row er man ar column er man ekoi hobe
        {
            printf(" * ");
        }
       
        printf("\n");//for row er je braccet asse tar modde rakbo
        }
          return 0;
    }
 
     
