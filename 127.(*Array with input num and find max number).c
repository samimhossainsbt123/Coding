// Array with input num and find max number
#include <stdio.h>
int main()
{ 
 int num[100],max,i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
   scanf("%d",&num[i]);
}
max=num[0];
for(i=1;i<n;i++)
{
    if(max<num[i])
    {
      max=num[i];
    }
}
printf("%d\n",max);
return 0;

}
