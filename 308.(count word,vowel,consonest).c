#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    char ch;
     int i=0,vowel=0,consonent=0,word=0;
     while(( ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||ch=='a')
        {
            vowel++;
        }

        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            consonent++;
        }
        else if(ch==' ')
        {
            word++;
        }
        i++;
    }
    if(i>0)
    {
        word++;
    }
    printf("word=%d\n",word);
    printf("vowel=%d\n",vowel);
    printf("Consonent=%d\n",consonent);
    return 0;
      
}
