//Lucas Number 

#include<stdio.h>
int main()
{
  int first =2,second=1,count=0,num,lucas;
  scanf("%d",&num);
  while(count<num)
  {
    if(count==0)
    {
      lucas=first;
    }
     else if(count==1)
     {
      lucas=second;

     }
     else
     {
      lucas=first + second;
      first=second;
      second=lucas;


     }
     printf("  %d  ",lucas);
     count++;
  }



    
}
