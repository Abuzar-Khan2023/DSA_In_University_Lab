#include <iostream>
using namespace std;
int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int sumFibonacci(int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += fibonacci(i);
    }
    return sum;
}
int main() 
{
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int result = sumFibonacci(n);

    cout << "The sum of the first " << n << " Fibonacci numbers is: " << result << endl;
    

    return 0;
}
