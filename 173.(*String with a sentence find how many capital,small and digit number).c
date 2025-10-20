// String with a sentence find how many capital,small and digit number
#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,capital,small,digit;
    i=capital=small=digit=0;
    char ch;   
   
    while((ch=str[i])!='\0')
    {

    if((ch>=65 && ch<=90) )  // ' ' hobena character hole hoto
    capital++;
    else if((ch>=97 && ch<=122))
    small++;
    else if(ch>=48 && ch<=57)   // mone rakbo hoy 0--9 or 48--57
     digit++;
    
    i++;
    }
   


     printf("capital=%d\n",capital);
     printf("small=%d\n",small);
     printf("digit=%d\n",digit); 
    

    return 0;
      
}
