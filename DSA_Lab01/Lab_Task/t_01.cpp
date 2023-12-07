#include <iostream>
using namespace std;

char getGrade(int score) 
{
    if (score >= 90) 
    {
        return 'A';
    }
     else if (score > 81) 
    {
        return 'B';
    }
     else if (score > 71) 
    {
        return 'C';
    }
     else if (score > 66) 
    {
        return 'D';
    }
     else if (score > 59) 
    {
        return 'E';
    }
     else 
    {
        return 'F';
    }
}

int main() 
{
    int marks[] = {80, 72, 93, 87, 90, 55, 66, 74, 69, 56};

    cout << "Grades for the students:\n";
    for (int i = 0; i < 10; i++) 
    {
        char grade = getGrade(marks[i]);
        cout<<"Student "<<i + 1<< ": Marks = "<<marks[i]<<", Grade = "<<grade <<endl;
    }

    return 0;
}
