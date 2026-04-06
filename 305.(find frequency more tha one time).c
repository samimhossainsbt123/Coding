#include<stdio.h>
int main()
{
    int num[100],fre[100];
    int count;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)

    {
        scanf("%d",&num[i]);
        fre[i]=-1;
    }


    for(i=0;i<n;i++)
    {
        count=1;
        if(fre[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                fre[j]=0;
            }
        }
      fre[i]=count;
    }
    for(i=0;i<n;i++)
    {
        if(fre[i]>1)
        {
          printf("%d appears %d time\n",num[i],fre[i]);
        }
    }
    


    
    return 0;
      
}
