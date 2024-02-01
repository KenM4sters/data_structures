// Headers
#include "./singly_linked_list.hpp"

// std 
#include <iostream>

int main() { 

    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(50);
    list.printList();
    list.insertAt(100, 3);
    list.printList();

    return 0;
}