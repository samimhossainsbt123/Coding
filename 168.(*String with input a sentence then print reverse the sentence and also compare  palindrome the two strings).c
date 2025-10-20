// String with input a sentence then print reverse the sentence and also compare  palindrome the two strings

#include<stdio.h>
int main()
{
    char str1[1000];
    char str2[1000];
    gets(str1);
    int i=0,len=0,j; // j er man 0 nibona 
    while(str1[i]!=0)
    {
      len++;
      i++;
    }
  for(j=0,i=len-1;i>=0;i--,j++) /// bhinno niom mukosto
  {
    str2[j]=str1[i];
  }
  str2[j]='\0';
    printf("%s\n",str2);


    int d=strcmp(str1,str2);
    if(d==0)
    {
      printf("Strings are palindrome");
    }
    else
    {
      printf("Strings are not palindrome");
    }
     
 

    return 0;
      
}
