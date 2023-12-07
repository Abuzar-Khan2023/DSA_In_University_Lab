#include <iostream>
using namespace std;

void merge(int A[], int temp[], int left, int mid, int right); // merging

void m_sort(int numbers[], int temp[], int left, int right);  // divide the array recursivly

void mergeSort(int numbers[], int temp[], int array_size);  

void mergeSort(int numbers[], int temp[], int array_size) 
{
    m_sort(numbers, temp, 0, array_size - 1);
}

void m_sort(int numbers[], int temp[], int left, int right)   // recursively divide-and-conquer step
{
    int mid;
    if (right > left) 
    {
        mid = (right + left) / 2;
        m_sort(numbers, temp, left, mid);
        m_sort(numbers, temp, mid + 1, right);
        merge(numbers, temp, left, mid, right);
    }
}

void merge(int A[], int temp[], int left, int mid, int right) // merging two sorted
{
    int i, j, k;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right) 
    {
        if (A[i] <= A[j]) 
        {
            temp[k] = A[i];
            i++;
        } 
        else 
        {
            temp[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) 
    {
        temp[k] = A[i];
        i++;
        k++;
    }

    while (j <= right) 
    {
        temp[k] = A[j];
        j++;
        k++;
    }

    for (i = left; i <= right; i++) 
    {
        A[i] = temp[i];
    }
}

int main() 
{
    const int array_size = 8;
    int numbers[] = {1, 34, 20, 56, 7, 67, 88, 2};
    int temp[array_size];

    cout << "Unsorted Array: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    cout << endl;

    mergeSort(numbers, temp, array_size);

    cout << "Sorted Array: ";
    for (int i = 0; i < array_size; i++) 
    {
        cout << numbers[i] << ", ";
    }

    return 0;
}
