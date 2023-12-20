#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void Enqueue(int value) 
{
    if (rear == MAX_SIZE - 1) 
    {
        cout << "Queue is full. Cannot enqueue." << endl;
    } else 
    {
        if (front == -1) 
        {
            front = 0;
        }
        queue[++rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }
}

void Dequeue() 
{
    if (front == -1) 
    {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else 
    {
        cout << queue[front++] << " dequeued from the queue." << endl;
        if (front > rear) 
        {
            front = rear = -1; // Reset front and rear when the queue becomes empty
        }
    }
}

int Peek() {
    if (front == -1) 
    {
        cout << "Queue is empty. Cannot peek." << endl;
        return -1; // Return a sentinel value indicating an empty queue
    } 
    else 
    {
        return queue[front];
    }
}

bool isEmpty() 
{
    return front == -1;
}

bool isFull() 
{
    return rear == MAX_SIZE - 1;
}

int Size() 
{
    if (front == -1) 
    {
        return 0;
    } else {
        return rear - front + 1;
    }
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
