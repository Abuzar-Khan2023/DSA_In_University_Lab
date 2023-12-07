#include<iostream> 
#define MAX 8
using namespace std; 
 
int list[MAX] = {10, 34, 2, 56, 7, 67, 88, 42}; 
void display() 
{
    int i; 
    cout<<"["; 

    for(i =0; i < MAX; i++) 
    { 
        cout<<list[i]<<" "; 
    } 
    cout<<"]\n"; 
} 
void bubbleSort() 
{
    int temp; int i,j; bool swapped = false; 
 
    for(i = 0; i < MAX-1; i++) 
    { 
        swapped = false; 
 
    for(j = 0; j < MAX-1-i; j++) 
    { 
        cout<<"Items compared: ["<<list[j]<<","<<list[j+1]<<"]"; 
 
    if(list[j] > list[j+1]) 
    { 
temp = list[j]; 
list[j] = list[j+1]; 
list[j+1] = temp; 
 
 swapped = true; 
cout<<"=>swapped["<<list[j]<<","<<list[j+1]<<"]\n"; 
} 
    else 
    { 
    cout<<" => not swapped\n"; 
    } 
    } 
  
    if(!swapped) 
    { 
    break; 
    } 
    cout<<"Iteration "<<i+1<<" #"; 
    display(); 
    } 
} 
 
int main() 
{ 
    cout<<"Input Array: "; 
    display(); 
    cout<<"\n"; 
 
    bubbleSort(); 
    cout<<"\nOutput Array: "; 
    display(); 

    return 0; 
} 