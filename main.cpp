// Headers
#include "./singly_linked_list.hpp"
#include "./stack_array.hpp"
#include "./qeue_array.hpp"
#include "./hash_table.hpp"

// std 
#include <iostream>

int main() {

    /*
        Linked List Testing
        SinglyLinkedList list;
        list.insert(10);
        list.insert(20);
        list.insert(50);
        list.insertAt(100, 3);
        list.remove(1);
        list.printList();
    */
    /*
        Stack Array Testing
        Stack_Array stack = Stack_Array(10);
        stack.push(3);
        stack.push(5);
        stack.push(7);
        stack.pop();
        int top = stack.peek();
        std::cout << top << std::endl;
        return 0;
    */
    /*
        Hash Table Tesing
        Queue_Array queue;
        queue.enQueue(10);
        queue.enQueue(12);
        queue.enQueue(14);
        queue.enQueue(16);
        queue.deQueue();
        queue.printQueue();
    */
    HashTable hashTable;
    hashTable.insertItem(100, "Ryu");
    hashTable.insertItem(350, "Ken");
    hashTable.insertItem(310, "Chun-Li");
    hashTable.insertItem(10, "Guile");
    hashTable.removeItem(10);
    if(hashTable.isEmpty())
        std::cout << "Empty Hash Table" << std::endl;
    else
        std::cout << "Hash Table is NOT empty" << std::endl;
    hashTable.printTable();

    string x = hashTable.searchTable(10);
    std::cout << x << std::endl;
    
}