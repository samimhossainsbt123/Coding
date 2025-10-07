// Array with input num then sum and average
#include <stdio.h>
int main()
{ 
 int num[100],sum,i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
   scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+num[i];
}
printf("%d\n",sum);
printf("%.2f",(float)sum/n);

return 0;

}
