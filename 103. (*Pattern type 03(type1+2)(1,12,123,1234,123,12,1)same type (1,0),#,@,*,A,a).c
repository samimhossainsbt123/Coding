// Pattern type 03(type1+2)(1,12,123,1234,123,12,1)same type (1,0),#,@,*,A,a
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
     for(row=num-1;row>=1;row--)// ulta hole eta hobei fixed
    {
        for(col=1;col<=row;col++)// eta kokhonoi poriborton hobena
        {
            printf("%d ",col);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
