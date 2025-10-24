// String with  lexicographical comparisom ,,2 ta word er modde konta smaller
#include<stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int i=0;
    while(1)   ///lexicographical comparism er getre eta dhorte hoy
    {
        if(a[i]=='\0' && b[i]=='\0')  // a,b duitai jodi ek satte sesh hoy
        {
            printf("Equal");
            break;

        }
    else if(a[i]=='\0')  // a jodi age sesh hoy
    {
        printf("A is smaller");
        break;
    }
      else if(b[i]=='\0') // b jodi age sesh hoy
    {
        printf("B is smaller");
        break;
    }
    else if(a[i]<b[i]) // a jodi choto hoy
    {
         printf("A is smaller");
        break;
    }
      else if(b[i]<a[i])  // b jodi choto hoy
    {
         printf("B is smaller");
        break;
    }
    else if(a[i]==b[i]) // a,b jodi soman hoy continue
    {
        i++;
    }
    }

    return 0;
      
}   
