#include "MyStack.hpp"

MyStack::MyStack() {
    theStack = new MyLinkedList();
}
MyStack::~MyStack() {
    delete theStack;
}
void MyStack::push(char c) {
    theStack->addToEnd(c);
}
char MyStack::pop() {
    return theStack->removeEnd();
}
char MyStack::top() {
    return theStack->seeEnd();
}
bool MyStack::isEmpty() {
    return (theStack->size == 0);
}
int MyStack::getSize() {
    return theStack->size;
}