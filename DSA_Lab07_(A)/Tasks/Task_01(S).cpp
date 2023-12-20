#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Change the maximum size according to your requirement

class Queue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = rear = -1;
    }

    // Function to insert an element into the queue
    void enqueue(int value);

    // Function to remove an element from the queue
    void dequeue();

    // Function to get the front element of the queue without removing it
    void peek();

    // Function to check if the queue is empty
    bool isEmpty();

    // Function to check if the queue is full
    bool isFull();

    // Function to get the current size of the queue
    int size();
};

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE; // it increments rear in a circular manner using modulo
    }

    arr[rear] = value;
    cout << value << " enqueued to the queue." << endl;
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl; 
        return;
    }

    cout << arr[front] << " dequeued from the queue." << endl;

    if (front == rear) {
        front = rear = -1; //If after dequeue the queue becomes empty, it resets both front and rear
    } else {
        front = (front + 1) % MAX_SIZE; //// it increments front in a circular manner using modulo
    } 
}

void Queue::peek() {
    if (isEmpty()) {
        cout << "Queue is empty. No element to peek." << endl;
    } else {
        cout << "Front element: " << arr[front] << endl; //Prints the front element without removing it
    }
}

bool Queue::isEmpty() {
    return front == -1; //Returns true if front is -1, indicating an empty queue; otherwise, returns false
}

bool Queue::isFull() {
    return (rear + 1) % MAX_SIZE == front; //Returns true if the next position of rear is equal to front, indicating a full queue; otherwise, returns false
}

int Queue::size() {
    if (isEmpty()) {
        return 0;
    } else if (front <= rear) { //if rare is not empty
	//If front is less than or equal to rear, it calculates the size straightforwardly.
        return rear - front + 1;
    } else {
        return MAX_SIZE - front + rear + 1; //if front is greater than rear, it considers the circular structure of the queue.
    }
}

int main() {
    Queue queue;

    // Example usage
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Queue size: " << queue.size() << endl;

    queue.peek();
    queue.dequeue();

    cout << "Queue size after dequeue: " << queue.size() << endl;

    return 0;
}