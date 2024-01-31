#pragma once

#include <iostream>

class LinkedList {
    public:
        struct Node {
            int data;
            Node* next;
        };

        LinkedList();

        char menu();
        void insert(Node* &head, Node* &tail, int data);
        void insertAsFirst(Node* &head, Node* &tail, int data);
        void remove(Node* &head, Node* &last);
        bool isEmpty(Node* head);
        void showList(Node* current);

};