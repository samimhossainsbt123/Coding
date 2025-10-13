// Fixed pass with EOF(End of file)
#include<stdio.h>
int main()
{
    int pass;
    while(scanf("%d",&pass))  // ei getre onk gula  pass scanf korbo jotokhon correct na hobe totokhon print hobe
    {
        if(pass==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
      
}
