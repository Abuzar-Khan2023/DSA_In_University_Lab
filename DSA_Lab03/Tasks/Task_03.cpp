#include <iostream>
using namespace std;

int countRotations(int arr[], int size) 
{
    int low = 0;
    int high = size - 1;

    while (low <= high) 
    {
        if (arr[low] <= arr[high]) 
        {
            return low;
        }

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if (arr[mid] <= arr[next] && arr[mid] >= arr[prev]) 
        {
            return mid;
        } 
        else if (arr[mid] <= arr[high]) 
        {
            high = mid - 1;
        } 
        else 
        {
            low = mid + 1;
        }
    }
    
    return -1;
}
int main() 
{
    int arr[] = {7, 9, 11, 12, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\n The list of the numbrs in Array:  \n";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i];
        if (i < size - 1) 
        {
            cout << ", ";
        }
    }
    cout << endl;

    int rotations = countRotations(arr, size);

    if (rotations != -1) 
    {
        cout << "The array is rotated " << rotations << " times in the clockwise direction." << endl;
    } 
    else 
    {
        cout << "The array is empty." << endl;
    }


    return 0;
}
