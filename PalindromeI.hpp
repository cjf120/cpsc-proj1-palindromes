// palindromei.hpp -- iterative palindrome tester
// c. 2015 A. Deeter

#ifndef PALINDROMEI_HPP
#define PALINDROMEI_HPP

#include "MyStack.hpp"
#include "MyQueue.hpp"
#include <string>

class PalindromeI {

public:
  PalindromeI() {}
  int test_string(const std::string& s); 
};

#endif
