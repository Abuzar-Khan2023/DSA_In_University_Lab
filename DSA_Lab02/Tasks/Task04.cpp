#include <iostream>
using namespace std;

void reverseString(string& str) 
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    string name;
    cout<<"Enter Your Name: ";
    getline(cin, name);
    cout << "Original: " << name << endl;

    reverseString(name);

    cout << "Reversed: " << name << endl;

    return 0;
}
