
//1 to 100 prime number with sqrt
#include<stdio.h>
int main()
{
    int i,num,count=0;


    for(num=2;num<=100;num++)
    {
        count=0;  //must dibo
        for(i=2;i<sqrt(num);i++)// pr for(i=2;i<num;i++)
          {
            if(num%i==0)
           {
            count++;
            break;
            }
        }
        if(count==0)
           printf(" %d ",num);
    
          
    }
    return 0;
}
