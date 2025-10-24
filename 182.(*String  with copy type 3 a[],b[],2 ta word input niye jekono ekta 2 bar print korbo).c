// String with copy type 3 a[],b[],2 ta word input niye jekono ekta 2 bar print korbo
#include<stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],i;
    scanf("%s %s",&a,&b);
    int len=strlen(b);  // jekono ektar len a convert korbo
    for(i=0;i<=len;i++)
    {
        a[i]=b[i]; // jeta 2 bar print korbo oita pore rakbo 
    }
    printf("%s %s",a,b);

    return 0;
      
}
