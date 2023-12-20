#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node 
{
    int data;
    Node* next;
};

// Top of the stack
Node* top = nullptr;

// Function to push a new element onto the stack
void Push(int value) 
{
    Node* newNode = new Node;   // Create a new node
    newNode->data = value;      // Set data
    newNode->next = top;        // Set next to current top
    top = newNode;              // Update top to the new node
    cout << value << " pushed to the stack." << endl;
}

// Function to pop the top element from the stack
void Pop() 
{
    if (top == nullptr) 
    {
        cout << "Stack is empty. Cannot pop." << endl;
    } 
    else 
    {
        Node* temp = top;       // Temporarily store the current top
        top = top->next;        // Update top to the next node
        cout << temp->data << " popped from the stack." << endl;
        delete temp;            // Free memory of the popped node
    }
}

// Function to display all elements in the stack
void Display() 
{
    if (top == nullptr) 
    {
        cout << "Stack is empty." << endl;
    } 
    else 
    {
        cout << "Stack elements: ";
        Node* current = top;
        while (current != nullptr) 
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

// Function to check if the stack is empty
bool isEmpty() 
{
    return top == nullptr;
}

int main() 
{
    // Test the functions

    int num1, num2;
    cout << "Push two numebrs to array: ";
    cin >> num1 >> num2;

    Push(num1);
    Push(num2);
    Display();

    Pop();
    Display();

    return 0;
}
