#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return i;
        }
    }
    return -1;
}
int lastOccurrence(int arr[], int size, int target) 
{
    int lastIndex = -1;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            lastIndex = i;
        }
    }
    return lastIndex;
}
int main() 
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 6};
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

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int firstIndex = firstOccurrence(arr, size, target);
    int lastIndex = lastOccurrence(arr, size, target);

    if (firstIndex != -1) 
    {
        cout << "First occurrence of " << target << " is at index " << firstIndex << endl;
        cout << "Last occurrence of " << target << " is at index " << lastIndex << endl;
    } 
    else 
    {
        cout << target << " is not found in the array." << endl;
    }


    return 0;
}
