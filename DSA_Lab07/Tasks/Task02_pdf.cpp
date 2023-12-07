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

// Method to count the number of nodes in the linked list
int size(Node* head) 
{
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) 
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Method to search for a given data in the linked list
bool search(Node* head, int n) 
{
    Node* temp = head;
    while (temp != nullptr) 
    {
        if (temp->data == n) 
        {
            // Data found in the linked list
            return true;
        }
        temp = temp->next;
    }

    // Data not found in the linked list
    return false;
}

int main() 
{
    // Create an empty linked list
    Node* head = nullptr;

    // Insert nodes at the head of the list
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

    // Print the contents of the linked list
    printList(head);

    //  Print the size of the linked list
    cout << "Size of the linked list: " << size(head) << endl;

    //  Search for data in the linked list
    int searchData = 20;
    if (search(head, searchData))
    {
        cout << searchData << " found in the linked list." << endl;
    }
    else
    {
        cout << searchData << " not found in the linked list." << endl;
    }


    return 0;
}
