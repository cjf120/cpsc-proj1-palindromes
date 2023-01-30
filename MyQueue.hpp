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
    int index;
    int size;
    bool isFull();
    void resizeArray();
    void copyToLarger();
    void copyToSmaller();
};