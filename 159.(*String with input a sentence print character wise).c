// String with input a sentence print character wise
#include<stdio.h>
int main()
{
    char str[20];
   gets(str);
   int i=0;   // charcter wise ba kono len er man chaile while+i diya kora hoy
   while(str[i]!='\0')
   {
    printf("%c\n",str[i]);  // character wise hoile %c print hoy stringe
    i++;
   }
    return 0;
}   
