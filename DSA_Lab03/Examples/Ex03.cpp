#include <iostream>
using namespace std;
int BinarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end)/2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
    }
        return -1;
}
int main()
{
    int arr[] = {2,3,4,10,40};
    int n = 5;
    int key;
    cout<<"\n The Array number is: 2, 3, 4, 10, 40 \n";
    cout<<"Enter the key value which you want to find: ";
    cin>>key;

    int result = BinarySearch(arr, 0, n-1, key);
    if (result == -1)
    {
        cout<<"Element is not Present in array "<<endl;
    }
    else
    {
        cout<<"Element is Present in index "<<result;
    }

    return 0;
}