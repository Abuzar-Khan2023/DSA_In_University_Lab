#include <iostream> 
using namespace std; 
#define MAX 8 

int intArray[MAX] = {10, 34, 2, 56, 7, 67, 88, 42}; 
void printline(int count) 
    { 
        int i; 
        for(i = 0;i < count-1;i++) 
        {
            cout<<"="; 
        } 
        cout<<"=\n"; 
} 
void display() 
{ 
    int i; 
    cout<<"[ "; 
 
    for(i = 0;i < MAX;i++) 
    { 
        cout<< intArray[i]<<" "; 
    } 
    cout<<"]\n"; 
} 
void selectionSort() 
{ 
    int indexMin,i,j; 
  
    for(i = 0; i < MAX-1; i++) 
    { 
        indexMin = i; 
 
        for(j = i+1;j < MAX;j++) 
        { 
            if(intArray[j] < intArray[indexMin]) 
            { 
                indexMin = j; 
            } 
        } 
        if(indexMin != i) 
        { 
            cout<<"Items swapped: ["<<intArray[i]<<","<<intArray[indexMin]<<" ]\n"; 

            int temp = intArray[indexMin]; 
            intArray[indexMin] = intArray[i]; 
            intArray[i] = temp; 
        } 
        cout<<"Iteration "<<i+1<<" #:"; 
        display(); 
    } 
}
int main() 
{ 
    cout<<"Input Array: ";
    display(); 
    printline(50); 
    selectionSort(); 

    cout<<"Output Array: "; 
    display(); 
    printline(50);

    return 0; 
}
