#pragma once

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    public:
        Node* head;
        LinkedList();

        char menu();
        void insert( int data);
        void insertAsFirst( int data);
        void remove();
        bool isEmpty(Node* head);
        void showList(Node* current);

};