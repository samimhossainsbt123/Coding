// Pattern type 15 part 03(row==col || row+col==num+1) 
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    
         for(row=1;row<=num;row++)
    {
        
        
       for(col=1;col<=num;col++)// means row er man ar column er man ekoi hobe
       if(col==row || col+row==num+1 )
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
       
        printf("\n");//for row er je braccet asse tar modde rakbo
        }
          return 0;
    }
 
     
