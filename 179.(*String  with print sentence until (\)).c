// String  with print sentence until (\)
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    fgets(str,1000001,stdin); // fgets joto deya thake tar theke 1 bessi nite hoy
    int i=0;
    while(str[i]!='\\')
    {
        printf("%c",str[i]);  // jokhon hubhu print korte hoy tokhon %s ,,ei chara baki gula %c
        i++;
    }
    return 0;
      
}
