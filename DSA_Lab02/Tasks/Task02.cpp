#include <iostream>
using namespace std;

void convertFahrenheitToCelsius(double* fahrenheit, double* celsius) 
{
    *celsius = (*fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() 
{
    double fahrenheit, celsius;

    
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    
    convertFahrenheitToCelsius(&fahrenheit, &celsius);

    
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;

    return 0;
}