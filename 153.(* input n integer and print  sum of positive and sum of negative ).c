// input n integer and print  sum of positive and sum of negative 

#include<stdio.h>
int main()
{
    int N,V,i,pos=0,neg=0;
    scanf("%d",&N);
    for( i=1;i<=N;i++)
    {
        scanf("%d",&V);
        if(V>0)
    {
        pos=pos+V;
    }
       
    else
    {
        neg=neg+V;
        
    }
}
    printf("%d ",pos);
     printf("%d ",neg);
    
   
    return 0;
      
}
