#include<stdio.h>
int main()
{
     int choice,n,i;
     
     do
     {
       printf("--- Mini Machine ---\n");
       printf("1.Find factorial number\n");
       printf("2.Reverse number\n");
       printf("3.Exit\n");
       printf("Enter your choice:");
       scanf("%d",&choice); 
        

         switch(choice)
         {
            case 1:
                   printf("Enter a number=");
                   scanf("%d",&n);
                   long long int fact=1;
                   for(i=1;i<=n;i++)
                   {
                    fact=fact*i;
                   }
                   printf("factorial number= %lld\n\n\n",fact);
                   break;

           case 2:
                   printf("Enter a number=");
                   scanf("%d",&n);
                   int rem,temp,reverse=0;
                   temp=n;
                   while(temp!=0)
                   {
                    rem=temp%10;
                    reverse=reverse*10+rem;
                    temp=temp/10;
                   }
                   printf("reverse number= %d\n\n",reverse);
                   break;

           case 3:
                   printf("Exiting");
                   break;

           default:
                   printf("Invalid choice\n\n\n");
      }

     } while (choice!=3); //condition deya hoisse
     
     
    return 0;
      
}
