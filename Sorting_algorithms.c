#include <stdio.h>

// Insertion Sort Function
void insertion_sorting(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Bubble Sort Function
void bubble_sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort Function
void selection_sorting(int arr[], int n)
{
    int i, j, mini;
    for (i = 0; i < n - 1; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

// Function to print the array
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[] = {12, 11, 13, 5, 6};
    int arr2[] = {10, 9, 2, 5, 3, 8, 4, 6, 0};
    int arr3[] = {12, 23, 1, 52, 3, 58, 2};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Insertion Sort
    printf("Array before Insertion Sort: ");
    print_array(arr1, n1);
    insertion_sorting(arr1, n1);
    printf("Array after Insertion Sort: ");
    print_array(arr1, n1);
    printf("\n");

    // Bubble Sort
    printf("Array before Bubble Sort: ");
    print_array(arr2, n2);
    bubble_sorting(arr2, n2);
    printf("Array after Bubble Sort: ");
    print_array(arr2, n2);
    printf("\n");

    // Selection Sort
    printf("Array before Selection Sort: ");
    print_array(arr3, n3);
    selection_sorting(arr3, n3);
    printf("Array after Selection Sort: ");
   

    return 0;
}
