#include "MyStack.hpp"

class MyStack {
    private:
    MyLinkedList *theStack;

    public:
    MyStack() {
        theStack = new MyLinkedList();
    }
    ~MyStack() {
        delete theStack;
    }
    void push(char c) {
        theStack->addToEnd(c);
    }
    char pop() {
        return theStack->removeEnd();
    }
    char top() {
        return theStack->seeEnd();
    }
    bool isEmpty() {
        return (theStack->size == 0);
    }
    int getSize() {
        return theStack->size;
    }
};