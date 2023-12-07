#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;

    cout<<"inter any number: ";
    cin>>a;
    cout<<"inter any number: ";
    cin>>b;

    if (a > b)
    {
        cout<<"A is greater then b! "<<endl;
    }
    if (a == b)
    {
        cout<<"A is equal to b!"<<endl;
    }
    if (a < b)
    {
        cout<<"A is less then b! "<<endl;
    }
    else
    {
        cout<<"you do not inter integers! \n THANKS! ";
    }
    
    
    return 0;
}