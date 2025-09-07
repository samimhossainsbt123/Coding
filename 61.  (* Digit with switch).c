// Digit with switch
#include<stdio.h>
int main()
{
    int digit;
    scanf("%d",&digit);
     
    switch(digit)// remainder switch a---switch,case,break,default
       {
         case '0':
             printf("Zero\n");
              break;
        case 1:
             printf("One\n");
                  break;
        case 2:
             printf("Two\n");
                  break;
        case 3:
             printf("Three\n");
                  break;
        case 4:
             printf("Four\n");
                  break;
        case 5:
             printf("Five\n");
                  break;
        case 6:
             printf("six\n");
                  break;
             
        case 7:
             printf("seven\n");
                  break;

        case 8:
             printf("Eight\n");
                  break;

        case 9:
             printf("Nine\n");
                  break;

 
              default:
              printf("Not a digit\n");

      }
 return 0;
}
