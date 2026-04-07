#include<stdio.h>
struct student
{
  int roll;
  char name[50];
  int m1,m2,m3;
};
int main()
{
    struct student s;
     int total;
     float avg;

     printf("enter roll: ");
     scanf("%d",&s.roll);

     printf("\n Enter name: ");
     scanf("%s",&s.name);

     printf("\n Enter Cse marks:");
     scanf("%d",&s.m1);

     printf("\n Enter Che marks:");
     scanf("%d",&s.m2);

     printf("\n Enter Phy marks:");
     scanf("%d",&s.m3);

     total=s.m1+s.m2+s.m3;
     avg= total/3;
      printf("\nTotal marks =%d",total);
      printf("\navg=%f\n",avg);


     if(avg>=80)
         {
            printf("A\n");
         }
      else if(avg>=60)
      {
        printf("B\n");
      }
      else if(avg>=40)
      {
        printf("C\n");
      }
      else
      {
        printf("Fail\n");
      }
      return 0;


}
