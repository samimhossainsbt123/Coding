// tolower(lower to upper) 
#include<stdio.h>
int main()
{
  char lower,upper;
  scanf("%c",&upper);
  lower=tolower(upper);
  printf("Lower=%c\n",lower);
                                 
  return 0;
}
