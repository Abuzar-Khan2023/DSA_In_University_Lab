// Open Addressing Hash Table (Double Hashing)
//  There ate use two formula of Hashing and then subtracting the answer from one another

#include <iostream>
#include <vector>

class DoubleHashingHashTable 
{
private:
    static const int tableSize = 10;  // Size of the hash table
    std::vector<std::pair<int, int>> table;  // Vector to store key-value pairs

public:
    DoubleHashingHashTable() : table(tableSize, std::make_pair(-1, -1)) {}

    // First hash function using the division method
    int hashFunction1(int key) 
    {
        return key % tableSize;
    }

    // Second hash function for double hashing
    int hashFunction2(int key)
    {
        // Ensure that the second hash is never 0 to avoid infinite loops
        return 1 + (key % (tableSize - 1));
    }

    // Insert a key-value pair into the hash table using double hashing
    void insert(int key, int value) 
    {
        int index = hashFunction1(key);
        int stepSize = hashFunction2(key);

        // Double hashing to find the next available slot
        while (table[index].first != -1) 
        {
            index = (index + stepSize) % tableSize;
        }

        // Insert the key-value pair
        table[index] = std::make_pair(key, value);
    }

    // Search for a key in the hash table and return its value
    int search(int key) 
    {
        int index = hashFunction1(key);
        int stepSize = hashFunction2(key);

        // Double hashing to find the key
        while (table[index].first != key && table[index].first != -1) 
        {
            index = (index + stepSize) % tableSize;
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
            std::cout << "Slot " << i << ": ";
            if (table[i].first != -1) {
                std::cout << "(" << table[i].first << ", " << table[i].second << ")";
            }
            std::cout << std::endl;
        }
    }
};

int main() 
{
    DoubleHashingHashTable hashTable;

    // Insert key-value pairs
    hashTable.insert(2, 100);
    hashTable.insert(1, 200);
    hashTable.insert(30, 300);
    hashTable.insert(9, 400);
    hashTable.insert(36, 500);

    // Display the contents of the hash table
    hashTable.display();

    // Search for a key
    int keyToSearch = 35;
    int result = hashTable.search(keyToSearch);

    // Print the result of the search
    if (result != -1) 
    {
        std::cout << "Value for key " << keyToSearch << ": " << result << std::endl;
    } 
    else 
    {
        std::cout << "Key " << keyToSearch << " not found." << std::endl;
    }

    return 0;
}
