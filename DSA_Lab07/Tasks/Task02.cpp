#include <iostream>
using namespace std;

// Define the structure for a node in the singly linked list
struct Node 
{
    int data;
    Node* next;
};

// Function to search for a specific element in the linked list and return its position
int searchElementPosition(Node* head, int target) 
{
    // Create a temporary pointer and set it to the head of the list
    Node* temp = head;

    // Initialize a variable to keep track of the position
    int position = 1;

    // Traverse the linked list
    while (temp != nullptr) 
    {
        // Check if the data of the current node matches the target
        if (temp->data == target) 
        {
            // Return the position if the target is found
            return position;
        }

        // Move to the next node in the list
        temp = temp->next;

        // Increment the position
        position++;
    }

    // Return -1 if the target is not found in the linked list
    return -1;
}

int main() 
{
    // Create an empty linked list
    Node* head = nullptr;

    // Insert nodes at the head of the list
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    // Search for a specific element (e.g., 20) and print its position
    int targetElement = 20;
    int position = searchElementPosition(head, targetElement);

    if (position != -1) 
    {
        cout << "Element " << targetElement << " found at position " << position << endl;
    } 
    else 
    {
        cout << "Element " << targetElement << " not found in the linked list." << endl;
    }

    return 0;
}
