class MyQueue {
    public:
    MyQueue();
    ~MyQueue();
    void push(char c);
    char pop();
    char top();
    bool isEmpty();
    int getSize();

    private:
    int index = 0;
    int size = 1;
    char MyArray[1] = { ' ' };
    bool isFull();
    void resizeArray();
    void copyToLarger();
    void copyToSmaller();
};