
// String with input 2 sentence compare each other
#include<stdio.h>
int main()
{
    char str1[1000];
     char str2[1000];
    gets(str1);
    gets(str2);
    int  d=strcmp(str1,str2);   // formula compare er hocce strcmp(str1,str2)
    if(d==0)
    {
      printf("Strings are  equal");
    }
    else
    {
      printf("Strings are  not equal");
    }

     
 

    return 0;
      
}
