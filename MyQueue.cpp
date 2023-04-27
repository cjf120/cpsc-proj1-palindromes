#include "MyQueue.hpp"

bool MyQueue::isFull() {
    for (int i = 0; i < size; i++) {
        if (MyArray[i] == ' ') {
            return false;
        }
    }
    return true;
}
void MyQueue::resizeArray() {
    if (index == size) {
        copyToLarger();
    }
    if (MyArray[0] == ' ' && size > 1) {
        copyToSmaller();
    }
}
void MyQueue::copyToLarger() {
    int oldSize = size;
    size *= 2;
    char returnArray[size];
    for (int i = 0; i < oldSize; i++) {
        returnArray[i] = MyArray[i];
    }
    for (int i = oldSize; i < size; i++) {
        returnArray[i] = ' ';
    }
    *MyArray = *returnArray;
}
void MyQueue::copyToSmaller() {
    char returnArray[size - 1];
    for (int i = 1; i < size; i++) {
        returnArray[i - 1] = MyArray[i];
    }
    index -= 1;
    size -= 1;
    *MyArray = *returnArray;
    resizeArray();
}

MyQueue::MyQueue() {    }
MyQueue::~MyQueue() {   }
void MyQueue::push(char c) {
    MyArray[index] = c;
    index += 1;

    resizeArray();
}
char MyQueue::pop() {
    char toReturn = MyArray[0];
    MyArray[0] = ' ';
    resizeArray();
    return toReturn;
}
char MyQueue::top() {
    return MyArray[0];
}
bool MyQueue::isEmpty() {
    if (size == 1 && MyArray[0] == ' ') {
        return true;
    } else {
        return false;
    }
}
int MyQueue::getSize() {
    if (isEmpty()) {
        return 0;
    } else {
        return index + 1;
    }
}