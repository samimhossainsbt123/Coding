// String with input 2 source concatenation  with str mane ektar satte arekter jog hoy then print hobe
#include<stdio.h>
int main()
{
   char source1[40];
   char source2[40];
   gets(source1);
  
   gets(source2); // 2nd ta input korar age prothome ekta space dibo jate porer ta ager ta age ekta space thake
   strcat(source1,source2);  // with str cat one  source one sentence print then  source 2 print
                           // source1 age  print korbo pore source 2 print hobe
   printf("%s",source1);
   
   return 0;
}   
