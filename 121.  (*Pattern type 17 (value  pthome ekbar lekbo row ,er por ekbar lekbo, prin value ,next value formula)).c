// Pattern type 17 (value  pthome ekbar lekbo row ,er por ekbar lekbo, prin value ,next value formula)
#include<stdio.h>
int main()
{
    int row,col,num,value=1;
    scanf("%d",&num);
    for(row=0;row<=num;row++)
    {    
        value=1;   // mone rakbo row er pore 
        for(col=1;col<=num-row;col++)
        {
            printf(" ");
        }
        for(col=0;col<=row;col++)
        {
               printf("%d  ",value);      
            value= value * (row-col) / (col+1);
            
 
        }
        printf("\n");
    }
    return 0;
}

     
