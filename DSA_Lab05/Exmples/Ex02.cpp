#include <iostream>
using namespace std;

#define MAX 8

int intArray[MAX] =  {5, 3, 2, 32, 7, 99, 50, 4}; 

void display() 
{ 
    cout << "[ "; 
    for (int i = 0; i < MAX; i++) 
    { 
        cout << intArray[i] << " "; 
    } 
    cout << "]\n"; 
} 

void insertionSort() 
{ 
    int valueToInsert, holePosition;

    for (int i = 1; i < MAX; i++) 
    { 
        valueToInsert = intArray[i]; 
        holePosition = i;

        while (holePosition > 0 && intArray[holePosition - 1] > valueToInsert) 
        { 
            intArray[holePosition] = intArray[holePosition - 1]; 
            holePosition--; 
        } 

        if (holePosition != i) 
        { 
            intArray[holePosition] = valueToInsert; 
        } 
    } 
} 

int main() 
{ 
    cout << "Input Array: "; 
    display(); 

    insertionSort(); 

    cout << "Sorted Array: "; 
    display(); 

    return 0;
}
