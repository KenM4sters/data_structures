#include "./singly_linked_list.hpp"

using namespace std;

/*
    Implementation of a Singly Linked List
*/

SinglyLinkedList::SinglyLinkedList() {
    cout << "linked list instantiated!" << endl;
    head = NULL;
    tail = NULL;
 
}

char SinglyLinkedList::menu() {

}

void SinglyLinkedList::insert(int data) {
    // Creating a new node
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty (head points to nothing), then our ned node will become our head 
    if(head == NULL) {
        head = newNode;
        cout << "new head with data: " << head->data << endl;
        return;
    }

    // Temporary node to follow the list until it reaches the end
    Node* temp = head;

    // Temp becomes the adress of the node that it's pointing to over and over until it points to nothing
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Adding our node as the last node in the list
    temp->next = newNode;

    // Success Message
    cout << "Added node with data: " << data << endl;

}

void SinglyLinkedList::insertAsFirst(int data) {

}

void SinglyLinkedList::remove(int data) {

}

bool SinglyLinkedList::isEmpty() {
    if(head == NULL) 
        return true;
    else
        return false;
}

void SinglyLinkedList::printList() {
    Node* temp = head;
    // Check if list is empty, if not then print the data of the head
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    while(temp != NULL) {
        cout << "data: " << temp->data << endl;
        temp = temp->next;
    }
     
}