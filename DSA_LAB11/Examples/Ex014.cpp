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
} // Inserts a new key 'k' 
void insertKey_min(int k) 
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

 // Fix the min heap property if it is violated 
    while (i != 0 && harr[parent(i)] > harr[i]) 
    { 
        int temp = harr[i]; 
        harr[i] = harr[parent(i)]; 
        harr[parent(i)] = temp; 
        i = parent(i); 
    } 
} 
// Inserts a new key 'k'
void insertKey_max(int k) 
{ 
    if (heap_size == MAX) 
    { 
    cout << "\nOverflow: Could not insertKey\n"; 
    return; 
} 

 // First insert the new key at the end 
    heap_size++; int i = heap_size - 1; 
    harr[i] = k;

// Fix the min heap property if it is violated 
    while (i != 0 && harr[parent(i)] < harr[i]) 
    { 
        int temp = harr[i]; harr[i] = 
        harr[parent(i)]; harr[parent(i)] = temp; 
        i = parent(i); 
    } 
}   
// A recursive method to heapify a subtree with root at given index // 
// This method assumes that the subtrees are already heapified
void MinHeapify(int i) 
{ 
    int l = left(i);
    int r = right(i); 

    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) 
    {
    smallest = l;
    }
    if (r < heap_size && harr[r] < harr[smallest]) 
    {
        smallest = r;
    }
    if (smallest != i) 
    { 
        int temp = harr[i]; harr[i] = 
        harr[smallest]; harr[smallest] = temp; 
        MinHeapify(smallest); 
    }
}
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
    MaxHeapify(largest); 
    } 
} 
int delete_key() 
{ 
    if (heap_size <= 0) 
    return 0;
    if (heap_size == 1) 
    { 
    heap_size--; 
    return harr[0]; 
    } 

// Store the minimum value, and remove it from heap
    int root = harr[0]; 
    harr[0] = harr[heap_size-1]; 
    heap_size--; // MinHeapify(0); 

    MaxHeapify(0); 
    return root;

} 
void display()
{ 
    for(int i=0 ; i<heap_size ; i++)
    { 
    cout<<" "<<harr[i]<<" ,"; 
    } 
    cout<<"\b \b"; 
} 
int main() 
{ 
    insertKey_min(3); 
    insertKey_min(2); 
    insertKey_min(1); 
    insertKey_min(5); 
    insertKey_min(4);

    insertKey_max(30); 
    insertKey_max(20); 
    insertKey_max(11); 
    insertKey_max(15); 
    insertKey_max(19); 

    cout<<"Inserted!!"; 
    display(); 
    cout<<endl; 
    int temp = delete_key(); 

    if(temp == 0) 
    { 
    cout<<"\nHeap is Empty!!"<<endl; 
    } 
    else 
    { 
        cout<<temp<<" Deleted!!"<<endl; 
    } 

    display(); 

    return 0;
}


