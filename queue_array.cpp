#include "./qeue_array.hpp"

/*
    Queue implementation - Array
*/



// Function to check if the queue is full - returns either true or false 
bool Queue_Array::isFull() {
    if(front == 0 & rear == MAX_SIZE - 1) 
        return true;
    else 
        return false;
}

// Function to check if the queue is empty - returns either true or false 
bool Queue_Array::isEmpty() {
    if(front == -1)
        return true;
    else
        return false;
}

// Function to add an element to the back of the queue
int Queue_Array::enQueue(int element) {
    if(isFull()) {
        throw std::runtime_error("Failed to add element to queue - queue is full!");
        return(-1);
    }
    else {
        if(front == -1)
            front = 0;
        rear += 1;
        array[rear] = element;
        cout << "Successfully added element to the list: " << element << endl;
        return(1);
    }
}

// Function to remove an element from the front of the queue 
int Queue_Array::deQueue() {
    int element;
    if(isEmpty()) {
        throw std::runtime_error("Failed to dequeue - queue is empty!");
        return(-1);
    }
    else {
        element = array[front];
        // Check if othe queue contains only a single element (front && back == 0)
        if(front >= rear) {
            front = -1;
            rear = -1;
        }
        else {
            front += 1;
        }
        cout << "Successfully removed element from the list: " << element << endl;
        return(1);
    }
}

// Function to print the queue's contents to the console
void Queue_Array::printQueue() {
    for(int i = front; i <= rear; i++) {
        cout << "element " << i << ": " << array[i] << endl;
    }
}