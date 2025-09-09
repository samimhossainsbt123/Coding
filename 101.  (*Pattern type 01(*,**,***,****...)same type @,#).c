// Pattern type 01(*,**,***,****...)same type @,#
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" * ");
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
