//Small and Capital letter with if else
#include<stdio.h>
int main()
{  
   char ch;
   scanf("%c",&ch);
   if(ch>='a' && ch<='z')
   {
    printf("Small letter\n");
   }
  else if(ch>='A'&& ch<='Z')
  {
     printf("Capital letter\n");
  }
  else
  {
    printf("Not a letter\n");
  }
   return 0;
}

