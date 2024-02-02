#include "./stack_linked_list.hpp"
#include <cassert>

/*
    Stack implementation - Linked List
*/

void Stack_LinkedList::push(int data) {
    Node* temp = new Node(data);
    assert(temp != NULL && "Failed to allocate memory on the heap");

    temp->data = data;
    temp->next = top;
    temp = top;
}

bool Stack_LinkedList::isEmpty() {
    return top == NULL;
}

int Stack_LinkedList::peak() {
    if(!isEmpty()) 
        return top->data;
    else {
        throw std::runtime_error("Stack is currently empty!");
        exit(1);
    }
}

void Stack_LinkedList::pop() {
    Node* temp;
    assert(!isEmpty() && "Stack is currently empty!");

    temp = top; 
    top = top->next;
    

}
void Stack_LinkedList::printStack() {}