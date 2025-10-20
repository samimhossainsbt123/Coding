
// String with input a sentence find how many word ,vowel,consonent.digit and others
#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,vowel,consonent,word,digit,other;
    i=vowel=consonent=word=digit=other=0;  // prothome sob 0 dhorte hoy
    
    char ch;
    while((ch=str[i])!=0)
    {
        if(ch=='a' ||ch=='A' ||ch=='e' ||ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U' )
        vowel++;
       else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       consonent++;
       else if(ch>='0' && ch<='9')
       digit++;
       else if(ch==' ')   // ekta word sehse ekta space ba faka ghor thake tai
       word++;
       else
       other++;
       i++;
    }
    word++;   // purata mileo ekta wprd tai sov seshe loop er bhaireo word++;


    printf("vowel = %d\n",vowel);
    printf("consonet = %d\n",consonent);
    printf("digit = %d\n",digit);
    printf("word = %d\n",word);
    printf("other = %d\n",other);
    return 0;
      
}
