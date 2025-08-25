//Prime number With loop
#include<stdio.h>
int main()

{
    int i,num,count=0;
    scanf("%d",&num);
    if(num<=1)
       {
        printf("Not a prime number\n");
        return 0;    
       }        //Because otherwise, the note 0,1 will be  printed 
                           //not a prime numbernot a prime number .
        
        

       
   for(i=2;i<num;i++)
       {
         if(num%i==0)
          {
           count++;
           break;
          }
       }   //for  er kaj ekhanei sesh
   if(count==0)
       {
        printf("Prime a number\n");
       }
  else 
      printf("Not a prime number\n");
    return 0;
}
