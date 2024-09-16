#include <stdio.h>

void selectionSort(int a[], int n)
{
    int i, j, mini;
    for(i = 0; i < n - 1; i++)
    {
        mini = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[mini])
            {
                mini = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;
    }
}

int main()
{
    int a[] = {12, 23, 1, 52, 3, 58, 2};
    int n = sizeof(a) / sizeof(a[0]);

    // Call the selection sort function
    selectionSort(a, n);

    // Print the sorted array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
