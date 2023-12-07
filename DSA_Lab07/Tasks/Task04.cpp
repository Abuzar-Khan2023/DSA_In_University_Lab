#include <iostream>
#include <unordered_set>
using namespace std;

// Define the structure for a node in the singly linked list
struct Node 
{
    int data;
    Node* next;
};

// Function to remove duplicate elements from an unsorted linked list
void removeDuplicates(Node* head) 
{
    if (head == nullptr || head->next == nullptr) 
    {
        // The list is empty or has only one node
        return;
    }

    unordered_set<int> uniqueSet; // To store unique elements
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) 
    {
        // Check if the current data is already in the set
        if (uniqueSet.find(current->data) != uniqueSet.end()) 
        {
            // Duplicate found, remove the current node
            previous->next = current->next;
            delete current;
            current = previous->next;
        } 
        else 
        {
            // Add the current data to the set
            uniqueSet.insert(current->data);
            previous = current;
            current = current->next;
        }
    }
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
    // Create an unsorted linked list with duplicates
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{10, nullptr};
    head->next->next->next = new Node{30, nullptr};
    head->next->next->next->next = new Node{20, nullptr};

    // Print the original linked list
    cout << "Original linked list: ";
    traverseAndPrint(head);

    // Remove duplicates
    removeDuplicates(head);

    // Print the linked list after removing duplicates
    cout << "Linked list after removing duplicates: ";
    traverseAndPrint(head);

    return 0;
}
