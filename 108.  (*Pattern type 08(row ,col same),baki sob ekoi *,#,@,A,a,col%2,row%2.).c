// Pattern type 08(row ,col same),baki sob ekoi *,#,@,A,a,col%2,row%2.
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
         for(col=1;col<=num;col++)// means row er man ar column er man ekoi hobe
        {
            printf(" %d ",col);
        }
       
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    
    return 0;
}
   
