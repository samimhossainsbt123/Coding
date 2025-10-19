
// String with input 2 source concatenation (without str) mane ektar satte arekter jog hoy then print hobe

#include<stdio.h>
int main()
{
    char str1[1000];
     char str2[1000];
    gets(str1);
    gets(str2);
    int i=0,j=0,len=0; // without str tai i,while hobe 
    while(str1[i]!=0)
    {
      i++;
      len++;
    }
    while(str2[j]!=0)
    {
      str1[len+j]=str2[j];  // concatenation er main formula eta
      j++;
    }
    printf("str1=%s\n",str1);
     
 

    return 0;
      
}
