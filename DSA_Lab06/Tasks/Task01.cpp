#include <iostream>

// Node structure for a singly linked list
template <typename T>
struct Node {
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

// Function to traverse and print elements of a linked list
template <typename T>
void traverseAndPrint(Node<T>* head) {
    Node<T>* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

int main() {
    // Creating a simple linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    Node<int>* head = new Node<int>(1);
    head->next = new Node<int>(2);
    head->next->next = new Node<int>(3);
    head->next->next->next = new Node<int>(4);

    // Traverse and print the linked list
    traverseAndPrint(head);

    // Cleanup: free the memory allocated for the linked list
    Node<int>* current = head;
    Node<int>* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
