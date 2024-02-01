#include "./stacks_arrays.hpp"
#include <iostream>
using namespace std;

// Check if the stack(array) is empty - returns either true or false
bool Stack_Arrays::isEmpty() {
    return top == -1;
}

// Check if the stack(array) is full - returns either true or false
bool Stack_Arrays::isFull() {
    // Stack starts at -1 as opposed to 0 to indicate an empty stack, 
    // so we need to -1 off the maxSize
    return top == maxSize -1;
}

// Function to add an element to the stack
void Stack_Arrays::push(int element) {
    // Check if the stack is full (can't add any more elements)
    if(!isFull()) {
        // increment top by 1 
        top += 1;
        array[top] = element;
        cout << element << " has been succesfully pushed onto the stack!" << endl;
    }
    else 
        throw std::runtime_error("Stack is currently full!");

}

// Function to remove an element form the stack
void Stack_Arrays::pop() {
    // Check if the stack is empty (can't remove an element)
    if(!isEmpty()) {
        int poppedElement = array[top];
        top -= 1;
        cout << poppedElement << " has been succesfully removed from the stack" << endl;
    }
    else 
        throw std::runtime_error("Stack is currently empty!");
}

// Function to return the current top value of the stack
int Stack_Arrays::peek() {
    if(!isEmpty()) 
        return array[top];
    else    
        throw std::runtime_error("Stack is currently empty!");
}

