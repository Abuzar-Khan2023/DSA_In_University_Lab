// Hash Function Implementation (Division Method)

// Formula for Division method
// h (key) = key mod M

#include <iostream>
using namespace std;

// Hash function using the division method
int hashFunction(int key, int tableSize) 
{
    return key % tableSize;
}

int main() 
{
    // Example hash table size
    const int tableSize = 10;

    // Example keys
    int keys[] = {42, 17, 35, 29, 56};

    // Hash and print the hash codes
    for (int i = 0; i < sizeof(keys) / sizeof(keys[0]); ++i) 
    {
        int hashCode;
        hashCode = hashFunction(keys[i], tableSize);
        cout << "Key: " << keys[i] << " => Hash Code: " << hashCode << std::endl;
    }

    return 0;
}
