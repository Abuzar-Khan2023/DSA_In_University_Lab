#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node 
{
    int data;
    Node* next;
};

// Front and rear pointers for the queue
Node* front = nullptr;
Node* rear = nullptr;

// Function to enqueue a new element into the queue
void Enqueue(int value) 
{
    Node* newNode = new Node;   // Create a new node
    newNode->data = value;      // Set data
    newNode->next = nullptr;    // Set next to nullptr

    if (rear == nullptr) 
    {
        front = rear = newNode;  // If the queue is empty, set front and rear to the new node
    } 
    else 
    {
        rear->next = newNode;    // Otherwise, link the current rear to the new node
        rear = newNode;          // Update rear to the new node
    }

    cout << value << " enqueued to the queue." << endl;
}

// Function to dequeue the front element from the queue
void Dequeue() 
{
    if (front == nullptr) 
    {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } 
    else 
    {
        Node* temp = front;       // Temporarily store the current front
        front = front->next;      // Update front to the next node
        cout << temp->data << " dequeued from the queue." << endl;
        delete temp;              // Free memory of the dequeued node

        if (front == nullptr) 
        {
            rear = nullptr;       // If the queue becomes empty, update rear to nullptr
        }
    }
}

// Function to peek at the front element of the queue
int Peek() 
{
    if (front == nullptr) 
    {
        cout << "Queue is empty. Cannot peek." << endl;
        return -1;  // Return a sentinel value indicating an empty queue
    } 
    else 
    {
        return front->data;  // Return the data of the front node
    }
}

// Function to check if the queue is empty
bool isEmpty() {
    return front == nullptr;
}

// Function to display the size of the queue
int Size() 
{
    int count = 0;
    Node* current = front;

    while (current != nullptr) 
    {
        count++;
        current = current->next;
    }

    return count;
}

int main() 
{
    // Test the functions
    int num1, num2;
    cout << "Push two numebrs to array: ";
    cin >> num1 >> num2;

    Enqueue(num1);
    Enqueue(num2);
    cout << "Front element: " << Peek() << endl;
    cout << "Queue size: " << Size() << endl;

    Dequeue();
    cout << "Front element: " << Peek() << endl;
    cout << "Queue size: " << Size() << endl;

    return 0;
}
