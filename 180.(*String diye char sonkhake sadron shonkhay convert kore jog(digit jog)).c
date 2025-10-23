// String diye char sonkhake sadron shonkhay convert kore jog(digit jog)
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    scanf("%s",&str);
    int len=strlen(str);// char theke sonkhay convert
    int sum=0,i;
    for(i=0;i<len;i++)
    {
        sum=sum+str[i]-48;  // 48 biyog na dile tar ascii vallue print hobe 
    }
    printf("%d",sum);
       return 0;
      
}
