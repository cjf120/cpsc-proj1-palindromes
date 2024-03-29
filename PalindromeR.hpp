// palindromeR.hpp -- recursive palindrome tester
// c. 2015 A. Deeter

#ifndef PALINDROMER_HPP
#define PALINDROMER_HPP

#include <string>

class PalindromeR {

private:
  int recursiveTest(std::string s);
  std::string simplifyString(std::string s);

public:
  PalindromeR() = default;
  int test_string(const std::string& s); 
};

#endif
