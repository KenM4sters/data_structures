#include "./linked_list.hpp"

LinkedList::LinkedList() {
    std::cout << "linked list instantiated!" << std::endl;
 
}

char LinkedList::menu() {

}

void LinkedList::insert(Node* &head, Node* &tail, int data) {

}

void LinkedList::insertAsFirst(Node* &head, Node* &tail, int data) {

}

void LinkedList::remove(Node* &head, Node* &last) {

}

bool LinkedList::isEmpty(Node* head) {
    if(head == NULL) 
        return true;
    else
        return false;
}

void LinkedList::showList(Node* current) {

}