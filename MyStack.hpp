#include <MyLinkedList.hpp>

class MyStack {
    public:
    MyStack();
    ~MyStack();
    void push(char c);
    char pop();
    char top();
    bool isEmpty();
    int getSize();

    private:
    MyLinkedList *theStack;
};