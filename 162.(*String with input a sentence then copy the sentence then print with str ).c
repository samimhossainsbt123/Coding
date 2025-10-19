// String with input a sentence then copy the sentence then print with str
#include<stdio.h>
int main()
{
   char source[40];
   char target[40];
   gets(source);
   strcpy(target,source);  // with str copy one sentence then print
                           // target age bose kitnu,, print hoy pore
   printf("source= %s\n",source);
   printf("target= %s",target);
   return 0;
}   
