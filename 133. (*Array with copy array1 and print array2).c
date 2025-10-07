// Array with copy array1 and print array2
#include <stdio.h>
 int main()
 {
int array1[5],array2[5],i;


for(i=0;i<5;i++)
{
   scanf("%d",&array1[i]);   // array 1 man nibo
}
printf("array 1\n");
for(i=0;i<5;i++)
{
   printf("%d ",array1[i]);    // array 1 man print korbo
}

 

for(i=0;i<5;i++)
{
   array2[i]=array1[i];   // array 1er man array 2 te nibo are ar2=ar1 hobe
}
printf("\n array 2\n");
for(i=0;i<5;i++)
{
   printf("%d ",array1[i]);    // array2 print korbo
}

   return 0;
 }






 
