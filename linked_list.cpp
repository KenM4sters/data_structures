#include "./linked_list.hpp"

LinkedList::LinkedList() {
    std::cout << "linked list instantiated!" << std::endl;
    head = NULL;
 
}

char LinkedList::menu() {

}

void LinkedList::insert(int data) {

}

void LinkedList::insertAsFirst(int data) {

}

void LinkedList::remove() {

}

bool LinkedList::isEmpty(Node* head) {
    if(head == NULL) 
        return true;
    else
        return false;
}

void LinkedList::showList(Node* current) {

}