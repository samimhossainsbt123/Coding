// Pattern type 01(1,12,123)col
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d  ",col);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
