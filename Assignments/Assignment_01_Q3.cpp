#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    vector<int> arr = {10, 25, 5, 42, 8, 15};

    cout << "Initial Array: ";
    for (int num : arr) 
    {
        cout << num << " ";
    }
    cout << endl;

    int new_number;
    cout << "Enter a new number to insert at the third position: ";
    cin >> new_number;
    arr.insert(arr.begin() + 2, new_number);

    int position_to_delete;
    cout << "Enter the position (1-based) to delete: ";
    cin >> position_to_delete;

    if (position_to_delete >= 1 && position_to_delete <= arr.size())
    {
        arr.erase(arr.begin() + position_to_delete - 1);

        cout << "Updated Array: ";
        for (int num : arr) 
        {
            cout << num << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "The specified position is out of range." << endl;
    }

    int search_number;
    cout << "Enter a number to search for: ";
    cin >> search_number;

    auto it = find(arr.begin(), arr.end(), search_number);
    if (it != arr.end()) 
    {
        int index = distance(arr.begin(), it);
        cout << "Found " << search_number << " at index " << index << endl;
    } 
    else 
    {
        cout << search_number << " not found in the array." << endl;
    }


    return 0;
}
