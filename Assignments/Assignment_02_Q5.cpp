#include <iostream>
using namespace std;

void countSort(int arr[], int size) 
{
    int max_value = arr[0];
    int min_value = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max_value) 
        {
            max_value = arr[i];
        }
        if (arr[i] < min_value) 
        {
            min_value = arr[i];
        }
    }

    int range_of_elements = max_value - min_value + 1;

    int count[range_of_elements] = {0};
    int output[size];

    for (int i = 0; i < size; ++i) 
    {
        count[arr[i] - min_value]++;
    }

    for (int i = 1; i < range_of_elements; ++i) 
    {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; --i) 
    {
        output[count[arr[i] - min_value] - 1] = arr[i];
        count[arr[i] - min_value]--;
    }
    
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = output[i];
    }
}

int main() 
{
    const int size = 20;
    int arr[size] = {4, 2, 7, 1, 5, 3, 8, 1, 6, 10, 5, 9, 4, 2, 3, 6, 8, 10, 7, 9};

    cout << " Original Array: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }

    countSort(arr, size);

    cout << "\n Sorted Array: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }


    return 0;
}
