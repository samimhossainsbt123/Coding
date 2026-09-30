#include<stdio.h>
int main()
{

    int arr[100];
    int n;
    printf("Enter n=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    int temp,min;


    //selection sort

    for(int i=0;i<n;i++)
    {

        min=i;
        for(int j=i+1;j<n;j++)
        {

            if(arr[j]<arr[min])
            {

                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    //print
    printf("Print all number=");
    for(int i=0;i<n;i++)
    {

        printf("%d ",arr[i]);
    }
    return 0;

}
