
class Stack_Arrays {
    private:
        int maxSize;
        int top;
        int array[];

    public:
        Stack_Arrays(int max) : maxSize(max), top(-1) {};
        bool isEmpty();
        bool isFull();
        void push(int element);
        void pop();
        int peek();

};