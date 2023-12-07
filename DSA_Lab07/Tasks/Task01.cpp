#include <iostream>
using namespace std;

// Define the structure for a node in the singly linked list
struct Node 
{
    int data;
    Node* next;
};

// Function to traverse and print the elements of a linked list
void traverseAndPrint(Node* head) 
{
    // Create a temporary pointer and set it to the head of the list
    Node* temp = head;

    // Traverse the linked list
    while (temp != nullptr) 
    {
        // Print the data of the current node
        cout << temp->data << " ";

        // Move to the next node in the list
        temp = temp->next;
    }

    // Print a newline at the end
    cout << endl;
}

int main() 
{
    // Create an empty linked list
    Node* head = nullptr;

    // Insert nodes at the head of the list
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    // Traverse and print the elements of the linked list
    traverseAndPrint(head);


    return 0;
}
