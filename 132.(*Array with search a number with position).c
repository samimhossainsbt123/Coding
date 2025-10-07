// Array with search a number with position
#include <stdio.h>
 int main()
 {
int num[]={30,40,60,89,96},value,i,pos=-1;
scanf("%d",&value);      // jekono leta man nibo
for(i=0;i<5;i++)
{
    if(value==num[i])// etai main value jodi jekono maner satte mile 
    {
        pos=i+1;   // pos=i+1
        break;      // mone rakbo
    }
}
if(pos==-1)  // karon 0 hocce prothomta
   {
    printf("Not found");
   }
 else
    {
    printf("%d",pos);
    }
   return 0;
 }






 
