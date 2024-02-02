#pragma once
#include <iostream>

/*
    Stack header file - Linked List
*/


class Node {
    public:
        int data;
        Node* next;

        Node(int data) : data(data), next(NULL) {}
};

class Stack_LinkedList {
    private:
        Node* top;
    public:
        Stack_LinkedList() : top(NULL) {}
        void push(int data);
        void pop();
        int peak();
        void printStack();
        bool isEmpty();
};