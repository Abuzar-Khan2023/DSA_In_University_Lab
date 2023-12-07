#include <iostream>
using namespace std;
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int num1 = 45;
    int num2 = 65;

    cout<<"Integer 01: "<<num1<<endl;
    cout<<"Integer 02: "<<num2<<endl;
    
    swap(&num1, &num2);

    cout<<"\n VALUE AFTER EXCHANGE! \n";

    cout<<"Integer 01: "<<num1<<endl;
    cout<<"Integer 02: "<<num2<<endl;


    return 0;
}