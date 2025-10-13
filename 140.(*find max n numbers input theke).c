// Input n and scanf n number porjonto find max
#include<stdio.h>
int main()
{
    int N,i,x;
    int max=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x); //  bhibinno man
        if(x>max)
        {
            max=x;
        }
        
    }
    printf("%d",max);
    
    return 0;

      
}
