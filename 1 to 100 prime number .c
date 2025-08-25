
// 1 to 100 prime number 
#include<stdio.h>
int main()

{
    int i,count=0,num;
   for(num=2;num<=100;num++)

    {
        count =0;// must mone rakbo
           
     for(i=2;i<num;i++)// time kom lagbe---for(i=2;i<sqrt(num);i++)
        {
         if(num%i==0)
           {
            count++;   // or count=1;
             break;
           }
        }   // 2nd for  er kaj ekhanei sesh
     if(count==0)
       {
        printf(" %d ",num);
       }
  }

  return 0;
}
