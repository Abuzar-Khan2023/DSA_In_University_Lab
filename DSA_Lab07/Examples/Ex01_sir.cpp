#include <iostream>
using namespace std;
// Define the structure for a node in the singly linked list
struct Node 
{
    int data;
    Node* next;
};
// Define the function to insert a new node at the head of the list
void insertAtHead(Node** head, int data) 
{
  // Create a new node
    Node* newNode = new Node;

  // Initialize the data member of the new node
    newNode->data = data;
  // Set the next pointer of the new node to the current head of the list
    newNode->next = *head;
  // Update the head of the list to point to the new node
    *head = newNode;
}

// Define the function to print the contents of the linked list
void printList(Node* head) 
{
  // Traverse the linked list and print the data of each node
    Node* temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << std::endl;
}

int main() {
  // Create an empty linked list
    Node* head = nullptr;

  // Insert nodes at the head of the list
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

  // Print the contents of the linked list
    printList(head);

  return 0;
}