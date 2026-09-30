#include<stdio.h>
int main()
{

    int arr[100];
    int n,value;
    int pos=-1;

    printf("Enter n th  element=\n");
    scanf("%d",&n);

    printf("Enter all element=\n");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("Enter search value=\n");
    scanf("%d",&value);


    //value searching
    for(int i=0;i<n;i++)
    {

        if(arr[i]==value)
        {
             pos=i+1;
             break;

         }
    }
    if(pos==-1)
    {

        printf("Not found\n");
    }
    else
    {
        printf("Value position=%d",pos);
    }


 return 0;
}
