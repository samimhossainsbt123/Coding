 // Count any digit

#include<stdio.h>
int main()
{
    int num,count;
    scanf("%d",&num);
    while(num!=0)
    {
     num=num/10;
     count++;
    }
    printf("Total of digit=%d\n",count);

    return 0;
   
}

