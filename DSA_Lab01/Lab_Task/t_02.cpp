#include <iostream>
using namespace std;

float Max(float numbers[], int size) 
{
    float max_num = numbers[0];
    for (int i = 1; i < size; i++) 
    {
        if (numbers[i] > max_num) 
        {
            max_num = numbers[i];
        }
    }
    return max_num;
}

int main() {
    float numbers[5];
    cout << "Enter 5 floating numbers:\n";

    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    float max_num = Max(numbers, 5);

    cout << "Maximum value: " << max_num << endl;

    return 0;
}
