//1 to 100 prime number and sumofprimenumbers
#include<stdio.h>
int main()
{
    int i,num,count=0,totalprimenumbers=0,sumofprimenumbers=0;


    for(num=2;num<=100;num++)
    {
        count=0;
        for(i=2;i<sqrt(num);i++)
          {
            if(num%i==0)
           {
            count++;
            break;
            }
        }
        if(count==0)
        
        {
           printf(" %d ",num);
          totalprimenumbers++;
          sumofprimenumbers=sumofprimenumbers+num;
          
        }
    }
    printf("\n %d\n",totalprimenumbers);
    printf("%d\n",sumofprimenumbers);
    return 0;
}
