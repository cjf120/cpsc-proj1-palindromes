#ifndef PALINDROMER_CPP
#define PALINDROMER_CPP

#include "MyFunctions.cpp"
#include "PalindromeR.hpp"
#include <string>

class PalindromeR {

private:
    int recursiveTest(std::string s) {
        if (s.size() <= 1) {
            return -1;
        } else {
            if (s[0] == s[s.size() - 1]) {
                return recursiveTest(s.substr(1, s.size()-2));
            } else {
                return 1;
            }
        }
    }

public:
    PalindromeR() {}
    int test_string(const std::string& s) {
        return recursiveTest(simplifyString(s));
    }
};

#endif