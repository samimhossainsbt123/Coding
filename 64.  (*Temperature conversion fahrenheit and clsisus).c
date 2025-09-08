// Temperature conversion fahrenheit and clsisus
#include<stdio.h>
int main()
{    int  choice;
    float celsius,fahrenheit;
     printf("Temperature conversion menu\n");
     printf("1. Fahrenheit to celcius\n");
     printf("2. celsius to fahrenheit\n");
      scanf("%d",&choice);

    switch(choice)
    {

        case 1:
        {
            printf("Enter fahrenheit temperature\n");
            scanf("%f",&fahrenheit);
            celsius=(fahrenheit-32)/1.8;
            printf("celsius=%f\n",celsius);
             break;
        }
         case 2:
        {
            printf("Enter celcius  temperature\n");
            scanf("%f",&celsius);
            fahrenheit=(1.8*celsius)+32;
            printf("fahrenheit=%f\n",fahrenheit);
            break;
        }
        default:
             printf("Not a correct option\n");
    }
}
