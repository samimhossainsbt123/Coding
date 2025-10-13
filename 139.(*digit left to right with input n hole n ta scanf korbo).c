// Input n tomo value  printf digit left to right
#include<stdio.h>
int main()
{
    int N,x,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            printf("0\n");
        }
        while(x!=0)
        {
            printf("%d ",x%10);  // laster ta paoyar jonno
            x=x/10;   // laster bade baki gula punoray korar jonno
        }
        printf("\n");
    }
    return 0;
      
}
