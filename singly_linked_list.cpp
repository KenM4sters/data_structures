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

void SinglyLinkedList::remove(int nodeOffset) {
    // temp2 is needed here
    Node *temp1 = head, *temp2 = NULL;
    int listLength = 0;

    // Checking if list is empty
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    // Getting the length of the list
    while(temp1 != NULL) {
        temp1 = temp1->next;
        listLength++;
    }

    // Checking if the nodeOffset is greater than the length of the list
    if(listLength < nodeOffset) {
        cout << "node offset entered is out of bounds!" << endl;
        return;
    }

    temp1 = head;

    // if the nodeOffset is 1, then the node to remove is the head
    if(nodeOffset == 1) {
        // Making the next node the new head of the list, since we're deleting the current one
        head = head->next;
        // free the memory allocated to the previous head (temp1)
        delete temp1;
        return;
    }

    // Traverse through the list to find the node to remove based on the nodeOffset
    // When this returns false, temp1 points to the node to be removed
    while(nodeOffset-- > 1) {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    // temp1 is to be deleted, so temp2 must now point to the node ahead of temp1
    temp2->next = temp1->next;

    // free memory for temp1
    delete temp1;
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