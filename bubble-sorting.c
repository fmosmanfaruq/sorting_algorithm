#include<stdio.h>
void BubbleSorting (int arr[], int n)
{
    for (int i =0; i<n-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={10,9,2,5,3,8,4,6,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSorting (arr, n);
    for (int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}