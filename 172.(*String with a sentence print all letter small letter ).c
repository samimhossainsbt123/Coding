// String with a sentence print all letter small letter 
#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    strlwr(str);   // small letter convert korar formula

    printf("%s",str);
    
    return 0;
      
}
