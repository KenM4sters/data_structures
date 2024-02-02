#include "./hash_table.hpp"
using namespace std;

// Function to chek if the hash table is empty - returns either true or false.
bool HashTable::isEmpty() const {
    // Initialise sum to zero.
    int sum{};
    // Loop through hashGroups and increment sum by the size of the hash table.
    for(int i{}; i < hashGroups; i++) {
        sum += table[i].size();
    }

    // if sum is 0, then return true, otherwise return false.
    if(!sum)
        return true;
    else
        return false;
}

// Function to generate the key for each item in the hash table 
int HashTable::generateHash(int key) {
    // Returns the remainder of the (key / num of hash groups in the table - set to 10).
    return key % hashGroups;
}

// Function to insert an item into the hash table.
void HashTable::insertItem(int key, string value) {
    // generate the unqiue hash for the item.
    int hashValue = generateHash(key);

    // reference to the specific place or 'cell' that the item occupies in the table.
    auto& cell = table[hashValue];
    auto bItr = begin(cell);  

    // Assume the key doesn't already exist.
    bool keyExists = false;

    // iterate through the cells in the table and if one matches the item pending placement, then
    // it will be overriden by said item.
    for(; bItr != end(cell); bItr++) {
        if(bItr->first == key) {
            keyExists = true;
            bItr->second = value;
            cout << "[WARNING] Key exists. Value replaced." << endl;
            break;
        }
    }  

    // If the key doesn't exist then place the item in the hash table.
    if(!keyExists) {
        cell.emplace_back(key, value);

    }
    
    return;
}

// Function to remove an item from the hash table.
void HashTable::removeItem(int key) {
    // Same as adding an item.
    int hashValue = generateHash(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);  
    bool keyExists = false;

    // Iterate through the cells in the hash table and if one item shares the same key as ours,
    // the remove it.
    for(; bItr != end(cell); bItr++) {
        if(bItr->first == key) {
            keyExists = true;
            bItr = cell.erase(bItr);
            cout << "[INFO] Item removed." << endl;
            break;
        }
    }  

    // If no item in the hash table corresponds to our key, then it doesn't exist - throw error. 
    if(!keyExists) {
        throw std::runtime_error("Key not found. Pair not removed.");
    }

    return;
}
// Function to print all the cells in the hesh table to the console.
void HashTable::printTable() {
    // Loop through all the cells, if the size is zero then ignore it (doesn't contain an item).
    for(int i{}; i < hashGroups; i++) {
        if(table[i].size() == 0)
            continue;
        auto bItr = table[i].begin();
        for(; bItr != table[i].end(); bItr++) {
            cout << "[INFO] Key: " << bItr->first << " | Value: " << bItr->second << endl;
        }
    }

    return;
}

// Function to search for a specific item in the hast table by key
string HashTable::searchTable(int key) {
    // Same as adding and removing an item
	int hashValue = generateHash(key);
	auto& cell = table[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;

    // Loop through each cell and check if their key matches ours - if so then return that item.
	for (; bItr != end(cell); bItr++) {
		if (bItr->first == key) {
			keyExists = true;
			return bItr->second;
		}
	}

    // Otherwise return that no item in the hash table matched our key.
	if (!keyExists)
		return "Result Not Found";
}



