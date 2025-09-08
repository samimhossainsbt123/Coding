// 1 to 100 prime numbers print
#include<stdio.h>
int main()
{
    int i,num,count=0;
    for(num=2;num<=100;num++)
    {
       count=0;// eta 1 to 100 er jekono tai dibo
      for(i=2;i<num;i++)// num=i hobena karon eta hole count =0 konotai hobena
    {
   
     if(num%i==0)
     {
          count++;
          break; 
     }
     
    }  
    if(count==0)
    {
     printf(" %d ",num);
    }
  
}
    return 0;
}

