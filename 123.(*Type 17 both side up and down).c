// Type 17 both side up and down
#include <stdio.h>
int main() 
{
   int n,row,col,value=1;
   scanf("%d",&n);
   for(row=0;row<=n;row++)  // row=0 theke suru hobe karon prothome 1 emnitei  print thake
   {
    value=1;  // 2nd line row er porei value =1 obossoi dhorte hobe
    for(col=1;col<=n-row;col++)   // space er jonno ager niomei space te kono change hoyna
    {
        printf(" ");
    }
    for(col=0;col<=row;col++)  // col =0 thekei  print hobe
    {
        printf("%d ",value);   // value age print pore formula
        value=value * (row-col)/(col+1);
    }
    printf("\n");
   }
     for(row=n-1;row>=0;row--)    // eta obossoi mone rakbo opposite side ba nicher side n-1 theke 0 porjonto komabo karon jehutu suru korechi ami o theke tay
   {
    value=1;    // nicher sideo sob ager motoi shudu prothom row er line ta change hobe
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
    for(col=0;col<=row;col++)
    {
        printf("%d ",value);
        value=value * (row-col)/(col+1);
    }
    printf("\n");
   }
   
    return 0;
}
