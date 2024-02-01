#pragma once

#include <iostream>

/*
    Header file for Singly Linked List
*/

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    public:
        Node *head, *tail;
        SinglyLinkedList();

        char menu();
        void insert(int data);
        void insertAt(int data, int nodeOffset);
        void remove(int nodeOffset);
        bool isEmpty();
        void printList();

};