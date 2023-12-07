#include <iostream>
using namespace std;
struct person
{
    char names[50];
    int age;
    float salary;
};
int main()
{
  person p1;
  cout<<"Enter Full Name: ";
  cin.get(p1.names, 50);

  cout<<"Enter Age: ";
  cin>>p1.age;

  cout<<"Enter Salary: ";
  cin>>p1.salary;

  cout<<"\n Displaying Information: \n";
  cout<<"Name: "<<p1.names<<endl;
  cout<<"Age: "<<p1.age<<endl;
  cout<<"Salary: "<<p1.salary<<endl;

  return 0;
}
