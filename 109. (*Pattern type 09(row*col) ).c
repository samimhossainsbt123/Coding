// Pattern type 09(row*col) 
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
         for(col=1;col<=row;col++)// means row er man ar column er man ekoi hobe
        {
            printf(" %d ",col*row);
        }
       
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    
    return 0;
}
