// Lucas series
#include<stdio.h>
int main()
{
    int num,count=0, lucas,first=2,second=1;
    scanf("%d",&num);
    while(count<num)
    {
        if(count==0)
        {
            lucas=first;
        }
         else if(count==1)
        {
            lucas=second;
        }
        else
        {
            lucas=first+second;
            first=second;
            second= lucas;
        }
        printf(" %d  ", lucas);
        count++;
    }
    return 0;
}
