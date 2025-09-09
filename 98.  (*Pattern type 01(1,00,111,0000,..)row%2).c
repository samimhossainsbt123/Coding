// Pattern type 01(1,00,111,0000,..)row%2
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d  ",row%2);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
