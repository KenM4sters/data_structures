#pragma once
#include <iostream>
#define MAX_SIZE 10
using namespace std;

/*
    Queue header file - Array
*/

class Queue_Array {
    private:
        int array[10], front, rear;
    
    public:
        Queue_Array(): front(-1), rear(-1) {};
        bool isFull();
        bool isEmpty();
        int enQueue(int element);
        int deQueue();
        void printQueue();


};