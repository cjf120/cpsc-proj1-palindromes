#include "MyQueue.hpp"

class MyQueue {
    private:
    int index = 0;
    int size = 1;
    char MyArray[1] = { ' ' };
    bool isFull() {
        for (int i = 0; i < size; i++) {
            if (MyArray[i] == ' ') {
                return false;
            }
        }
        return true;
    }
    void resizeArray() {
        if (index == size) {
            copyToLarger();
        }
        if (MyArray[0] == ' ' && size > 1) {
            copyToSmaller();
        }
    }
    void copyToLarger() {
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
    void copyToSmaller() {
        char returnArray[size - 1];
        for (int i = 1; i < size; i++) {
            returnArray[i - 1] = MyArray[i];
        }
        index -= 1;
        size -= 1;
        *MyArray = *returnArray;
        resizeArray();
    }

    public:
    MyQueue() {    }
    ~MyQueue() {
        delete MyArray;
    }
    void push(char c) {
        MyArray[index] = c;
        index += 1;

        resizeArray();
    }
    char pop() {
        char toReturn = MyArray[0];
        MyArray[0] = ' ';
        resizeArray();
        return toReturn;
    }
    char top() {
        return MyArray[0];
    }
    bool isEmpty() {
        if (size == 1 && MyArray[0] == ' ') {
            return true;
        } else {
            return false;
        }
    }
    int getSize() {
        if (isEmpty()) {
            return 0;
        } else {
            return index + 1;
        }
    }
};