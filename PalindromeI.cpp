#ifndef PALINDROMEI_CPP
#define PALINDROMEI_CPP

#include "PalindromeI.hpp"
#include "MyStack.hpp"
#include <string>

class PalindromeI {

public:
    PalindromeI() {}
    int test_string(const std::string& s) {
        MyStack *stack = new MyStack;
        for (char c : s) {
            stack->push(c);
        }
    }
};

#endif