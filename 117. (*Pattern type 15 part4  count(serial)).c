// Pattern type 15 part4  count(serial)
#include<stdio.h>
int main()
{
    int row,col,num,count=0;
    scanf("%d",&num);
    
         for(row=1;row<=num;row++)
    {
       for(col=1;col<=row;col++)// means row er man ar column er man ekoi hobe
       {
        printf("%d ",++count);
       }
        printf("\n");//for row er je braccet asse tar modde rakbo
        }
          return 0;
    }
