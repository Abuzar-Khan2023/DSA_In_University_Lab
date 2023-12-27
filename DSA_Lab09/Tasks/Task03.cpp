// Open Addressing Hash Table (Linear Probing)
//  +1

#include <iostream>
#include <vector>
using namespace std;

class LinearProbingHashTable 
{
private:
    static const int tableSize = 10;  // Size of the hash table
    vector<pair<int, int>> table;  // Vector to store key-value pairs

public:
    LinearProbingHashTable() : table(tableSize, make_pair(-1, -1)) {}  // (-1, -1) indicate the empty slot in table

    // Hash function using the division method
    int hashFunction(int key) 
    {
        return key % tableSize;
    }

    // Insert a key-value pair into the hash table using linear probing
    void insert(int key, int value) 
    {
        int index = hashFunction(key);

        // Linear probing to find the next available slot
        while (table[index].first != -1) 
        {
            index = (index + 1) % tableSize;
        }

        // Insert the key-value pair
        table[index] = make_pair(key, value);
    }

    // Search for a key in the hash table and return its value
    int search(int key) {
        int index = hashFunction(key);

        // Linear probing to find the key
        while (table[index].first != key && table[index].first != -1) 
        {
            index = (index + 1) % tableSize;
        }

        // Return the value if the key is found
        if (table[index].first == key) 
        {
            return table[index].second;
        }

        return -1; // Key not found
    }

    // Display the contents of the hash table
    void display() {
        for (int i = 0; i < tableSize; ++i) 
        {
            cout << "Slot " << i << ": ";
            if (table[i].first != -1) {
                cout << "(" << table[i].first << ", " << table[i].second << ")";
            }
            cout << endl;
        }
    }
};

int main() {
    LinearProbingHashTable hashTable;

    // Insert key-value pairs
    hashTable.insert(2, 100);
    hashTable.insert(17, 200);
    hashTable.insert(50, 300);
    hashTable.insert(49, 400);
    hashTable.insert(86, 500);

    // Display the contents of the hash table
    hashTable.display();

    // Search for a key
    int keyToSearch = 35;
    int result = hashTable.search(keyToSearch);

    // Print the result of the search
    if (result != -1) 
    {
        cout << "Value for key " << keyToSearch << ": " << result << std::endl;
    } 
    else 
    {
       cout << "Key " << keyToSearch << " not found." << endl;
    }

    return 0;
}
