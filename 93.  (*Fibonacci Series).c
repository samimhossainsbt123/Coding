// Fibonacci Series
#include<stdio.h>
int main()
{
    int num,count=0,fibo,first=0,second=1;//prime ,fibo,lucas holei count thakbei 
    scanf("%d",&num);
    while(count<num)// eta fibo and locus series modde hoy
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf(" %d  ",fibo);
        count++;
    }
    return 0;
}
