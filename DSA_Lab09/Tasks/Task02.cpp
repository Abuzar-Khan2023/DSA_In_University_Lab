// Chaining Hash Table (Open Hashing)
// Use link list to arrane the two values

#include <iostream>
#include <list>
using namespace std;

class ChainingHashTable 
{
private:
    static const int tableSize = 10;
    list<pair<int, int>> table[tableSize];  // Two elements and we sue link list for two pair

public:
    // Simple hash function: key % table size
    int hashFunction(int key) 
    {
        return key % tableSize;
    }

    // Insert a key-value pair into the hash table
    void insert(int key, int value) 
    {
        int index = hashFunction(key);
        table[index].push_back(make_pair(key, value));
    }

    // Search for a key in the hash table and return its value
    int search(int key) 
    {
        int index = hashFunction(key);

        // Iterate through the linked list at the specified index
        for (const auto& entry : table[index]) 
        {
            if (entry.first == key) {
                return entry.second; // Return the value associated with the key
            }
        }

        return -1; // Key not found
    }

    // Display the contents of the hash table
    void display() {
        for (int i = 0; i < tableSize; ++i) 
        {
            cout << "Bucket " << i << ": ";

            for (const auto& entry : table[i]) 
            {
                cout << "(" << entry.first << ", " << entry.second << ") ";
            }

            cout << endl;
        }
    }
};

int main() 
{
    ChainingHashTable hashTable;

    // Insert key-value pairs
    hashTable.insert(12, 10);
    hashTable.insert(17, 29);
    hashTable.insert(39, 32);
    hashTable.insert(29, 40);
    hashTable.insert(6, 57);

    // Display the contents of the hash table
    hashTable.display();

    // Search for a key
    int keyToSearch = 35;
    int result = hashTable.search(keyToSearch);

    // Print the result of the search
    if (result != -1) 
    {
        cout << "Value for key " << keyToSearch << ": " << result << endl;
    } 
    else 
    {
        cout << "Key " << keyToSearch << " not found." << endl;
    }

    return 0;
}
