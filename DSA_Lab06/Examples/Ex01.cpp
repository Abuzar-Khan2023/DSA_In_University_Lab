// Quick Sort

#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right);

void quickSort(int arr[], int left, int right) 
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    // Partition
    while (i <= j) 
    {
        while (arr[i] < pivot) 
        {
            i++;
        }
        while (arr[j] > pivot) 
        {
            j--;
        }
        if (i <= j) 
        {
            // Swap arr[i] and arr[j]
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Recursively sort the sub-arrays
    if (left < j) 
    {
        quickSort(arr, left, j);
    }
    if (i < right) 
    {
        quickSort(arr, i, right);
    }
}
int main() 
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}