// String with two(2) sentence print swapping these sentence
#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    char temp[100];
    gets(str1);
    gets(str2);
    printf("Before swapping=\n\n");
    
    printf("str1= %s\n",str1);
    printf("str2= %s\n\n",str2);


    strcpy(temp,str1);   // ekta theke copy kore arek jaygay bosaitasse
    strcpy(str1,str2);
    strcpy(str2,temp);
      
     printf("After swapping=\n\n");

    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);

    
    return 0;
      
}
