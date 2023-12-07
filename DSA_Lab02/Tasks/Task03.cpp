#include <iostream>

using namespace std;

struct Employee 
{
    string name;
    int age;
    double salary;
};
int main() 
{
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter data for Employee " << i + 1 << ":" << endl;
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].name);
        
        cout << "Age: ";
        cin >> employees[i].age;

        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\n Employee Information: \n" << endl;

    for (int i = 0; i < numEmployees; ++i) 
    {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}