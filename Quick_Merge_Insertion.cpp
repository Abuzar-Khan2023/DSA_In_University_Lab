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


// Merge Sort
/*
#include <iostream>
using namespace std;

template <typename T>
void merge(T arr[], int left, int middle, int right) 
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    T leftArray[n1];
    T rightArray[n2];

    for (int i = 0; i < n1; i++) 
    {
        leftArray[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++) 
    {
        rightArray[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) 
    {
        if (leftArray[i] <= rightArray[j]) 
        {
            arr[k] = leftArray[i];
            i++;
        } 
        else 
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

template <typename T>
void mergeSort(T arr[], int left, int right) 
{
    if (left < right) 
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main() 
{
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Insertion Sort

#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        T key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }


    return 0;
}
*/

