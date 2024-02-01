// Headers
#include "./singly_linked_list.hpp"
#include "./stacks_arrays.hpp"

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

    Stack_Arrays stack = Stack_Arrays(10);
    stack.push(3);
    stack.push(5);
    stack.push(7);
    stack.pop();
    int top = stack.peek();
    std::cout << top << std::endl;
    return 0;
}