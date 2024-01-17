#include <iostream> 
using namespace std; 

#define MAX 5 
int heap_size=0; 

int harr[MAX]; 
int parent(int i) 
{ 
    return (i-1)/2; 
} 

// to get index of left child of node at index i 
int left(int i) 
{ 
    return (2*i + 1); 
}

// to get index of right child of node at index i 
int right(int i) 
{ 
    return (2*i + 2); 
}

// Inserts a new key 'k' into a max heap
void insertKey_max(int k) 
{ 
    if (heap_size == MAX) 
    { 
        cout << "\nOverflow: Could not insertKey\n"; 
        return; 
    } 

    // First insert the new key at the end 
    heap_size++; 
    int i = heap_size - 1; 
    harr[i] = k;

    // Fix the max heap property if it is violated 
    while (i != 0 && harr[parent(i)] < harr[i]) 
    { 
        int temp = harr[i]; 
        harr[i] = harr[parent(i)]; 
        harr[parent(i)] = temp; 
        i = parent(i); 
    } 
}

// A recursive method to heapify a subtree with root at given index 
// This method assumes that the subtrees are already heapified
void MaxHeapify(int i) 
{  
    int l = left(i);
    int r = right(i); 
    int largest = i; 
    if (l < heap_size && harr[l] > harr[i]) 
    {
        largest = l;
    }
    if (r < heap_size && harr[r] > harr[largest]) 
    {
        largest = r;
    } 
    if (largest != i) 
    {
        int temp = harr[i]; 
        harr[i] = harr[largest]; 
        harr[largest] = temp; 
        MaxHeapify(largest); 
    } 
} 

// Remove and return the maximum value from the max heap
int removemax() 
{ 
    if (heap_size <= 0)

        return 0;

    if (heap_size == 1) 
    { 
        heap_size--; 
        return harr[0]; 
    } 

    // Store the maximum value, and remove it from heap
    int root = harr[0]; 
    harr[0] = harr[heap_size-1]; 
    heap_size--; 

    MaxHeapify(0); 
    return root;
} 

void displayDescending(int i) 
{
    if (i >= heap_size) 
    {
        return;
    }

    // Recursively display the right subtree
    displayDescending(right(i));

    // Display the current node
    cout << " " << harr[i] << " ,";

    // Recursively display the left subtree
    displayDescending(left(i));
}

void displayDescending() 
{
    displayDescending(0);
    cout << "\b \b" << endl;
}


int main() 
{ 
    insertKey_max(3); 
    insertKey_max(2); 
    insertKey_max(1); 
    insertKey_max(9); 
    insertKey_max(5); 

    cout << "Max Heap: ";
    displayDescending();
    cout << endl; 

    int temp = removemax();

    if(temp == 0) 
    { 
        cout<<"\nHeap is Empty!!"<<endl; 
    } 
    else 
    { 
        cout<<temp<<" Removed!!"<<endl; 
    } 

    cout << "Sorted Array: ";
    while (heap_size > 0) {
        int temp = removemax();
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}


