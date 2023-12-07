#include <iostream>
using namespace std;

int main() 
{
    int rows = 4;
    int columns = 2;
    int array[4][2] = { {1, 2},{3, 4},{5, 6},{7, 8} };

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

