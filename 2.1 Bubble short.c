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
    int temp;
    //Bubble sorted
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

    //printed
      printf("sorted =");
    for(int i=0;i<n;i++)
    {

        printf("%d ",arr[i]);
    }
    return 0;
}
