// Patter  type 02 ultA(.....1234,123,12,1) same  bhabe@,#,*,row,ABC.AB.A
#include<stdio.h>
int main()
{
    int row,col,num;
    scanf("%d",&num);
    for(row=num-1;row>=1;row--) // ulta hole eta fixed hoy
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");//for row er je braccet asse tar modde rakbo
    }
    return 0;
}
