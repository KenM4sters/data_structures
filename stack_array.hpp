#pragma once
#define MAX_SIZE 10

/*
    Stack header file - Array
*/

class Stack_Array {
    private:
        int maxSize;
        int top;
        int array[MAX_SIZE];

    public:
        Stack_Array(int max) : maxSize(max), top(-1) {};
        bool isEmpty();
        bool isFull();
        void push(int element);
        void pop();
        int peek();

};