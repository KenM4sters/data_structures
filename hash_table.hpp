#pragma once

#include <iostream>
#include <list>
#include <cstring>


/*
    Header file for Hash tables using linked lists and and seperate chaining to handle collisions
*/

class HashTable {
    private:
        static const int hashGroups = 10;
        std::list<std::pair<int, std::string>> table[hashGroups];
    public:
        bool isEmpty() const;
        int generateHash(int key);
        void insertItem(int key, std::string value);
        void removeItem(int key);
        std::string searchTable(int key);
        void printTable();
};