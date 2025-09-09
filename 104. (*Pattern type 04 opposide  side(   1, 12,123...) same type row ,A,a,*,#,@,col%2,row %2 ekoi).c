// Pattern type 04 opposide side(   1, 12,123...) same type row ,A,a,*,#,@,col%2,row %2 ekoi
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)  // space er jonno eta fixed
        {
            printf(" ");
        }
       {
         for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
       }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
