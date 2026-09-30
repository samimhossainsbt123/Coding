#include<stdio.h>
int main()
{

    int arr[100];
    int n;
    printf("Enter n=\n");
    scanf("%d",&n);
    int temp;
    int value;
    int left=0,right=n-1,mid;


    printf("Enter all elemenet=");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("Enter value=");
    scanf("%d",&value);


    //sorting i,j  shorting
    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-1-i;j++)
        {

            if(arr[j]>arr[j+1]) 

            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //Binary search

    while(left<=right)
    {

        mid=(left+right)/2;
        if(arr[mid]==value)
        {

            printf("Element found and positionn is=%d",mid+1);
            return 0;
        }
        else if(arr[mid]<value)
        {

            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }
      printf("Element not found");
        return 0;
}
