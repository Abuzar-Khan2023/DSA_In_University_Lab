#include <iostream>
using namespace std;

// Define the structure for a node in the singly linked list
struct Node 
{
    int data;
    Node* next;
};

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) 
{
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) 
    {
        next = current->next; // Save the next node
        current->next = prev;  // Reverse the link
        prev = current;        // Move one step forward
        current = next;        // Move one step forward
    }

    // The 'prev' pointer now points to the new head of the reversed list
    return prev;
}

// Function to traverse and print the elements of a linked list
void traverseAndPrint(Node* head) 
{
    Node* temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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

    // Print the original linked list
    cout << "Original linked list: ";
    traverseAndPrint(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    // Print the reversed linked list
    cout << "Reversed linked list: ";
    traverseAndPrint(head);

    return 0;
}
