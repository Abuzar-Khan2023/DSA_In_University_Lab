// Stack Functions
// Stack is folloe the LIFO (Last In First Out) priniples

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int stack[MAX_SIZE];
int top = -1;

void Push(int value)
{
    if (top == MAX_SIZE - 1) 
    {
       cout << "Stack is full. Cannot push." << endl;
    }
    else
    {
        stack[++top] = value;
        cout << value << " pushed to the stack." << endl;
    }
}

void Pop()
{
    if (top == -1) 
    {
        cout << "Stack is empty. Cannot pop." << endl;
    } 
    else 
    {
        cout << stack[top--] << " popped from the stack." << endl;
    }
}

void Display() 
{
    if (top == -1) 
    {
        cout << "Stack is empty." << endl;
    } 
    else 
    {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) 
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

bool isEmpty() 
{
    return top == -1;
}

bool isFull() 
{
    return top == MAX_SIZE - 1;
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
