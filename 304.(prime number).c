#include<stdio.h>
int main()
{
    int n,num,count;
    scanf("%d",&n);
    int i;
    for(num=2;num<=n;num++)
    {
        count=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        
        }
        if(count==0)
        {
            printf("%d\n",num);
        }
       
    }
    printf("while  diye...\n");
    num=2;
    while(num<=n)
    {
        count=0;
        i=2;
        while(i<num)
        {
            if(num%i==0)
            {
                count++;
                break;
               
            }
            i++;
        }
        
        if(count==0)
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
      
}
