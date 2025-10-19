// String with input a sentence  find length without str( means koto gula word +  space asse)
#include<stdio.h>
int main()
{
    char str[20];
   gets(str);
   int i=0,len=0;    // without str shorcut chara tai i+while dite hoisse
   while(str[i]!='\0')
   {
    len++;  // ek ek kore word er sonkha jog hobe
    i++;
   }
   printf("%d",len);// karon shonkha print korbe tai %d
    return 0;
}   
