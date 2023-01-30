#ifndef PALINDROMEI_CPP
#define PALINDROMEI_CPP

#include "PalindromeI.hpp"
#include <string>

class PalindromeI {

public:
    PalindromeI() {}
    int test_string(const std::string& s) {
        std::string goodString = "";
        for (char c : s) {
            if (isalpha(c)) {
                goodString += std::tolower(c);
            }
        }

        MyStack *stack = new MyStack;
        for (char c : goodString) {
            stack->push(c);
        }
        
        MyQueue *queue = new MyQueue;
        for (char c : goodString) {
            queue->push(c);
        }

        int position = 0;
        int isPalindrome = -1;
        while(!stack->isEmpty()) {
            if (stack->pop() != queue->pop()) {
                isPalindrome = position;
                break;
            }
            position++;
        }
        return isPalindrome;
    }
};

#endif