// String with input a sentence and print revers sentence witout str
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
    printf("%s",str2);
     
 

    return 0;
      
}
