// String a sentence  theke shudu consonent count korbo kintu vowel count korbona
#include<stdio.h>
#include<string.h>
int main()
{
    char S[100000];
     gets(S);
    
     int i,len,vowel;
     i=0;
     len=0;
     vowel=0;
     int sum;
     while((S[i])!='\0')  // prothome len er man ber kore pore vowel er man biyog korbo
     {
        i++;
        len++;
        if(S[i]=='a'|| S[i]=='i'|| S[i]=='e'|| S[i]=='o'||S[i]=='u')
        {
            vowel++;
        }

     }
     sum=len-vowel;
     printf("%d",sum);
    

    return 0;

      
}
