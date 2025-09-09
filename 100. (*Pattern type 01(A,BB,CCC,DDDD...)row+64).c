// Pattern type 01(A,BB,CCC,DDDD...)row+64
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c  ",row+64);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
