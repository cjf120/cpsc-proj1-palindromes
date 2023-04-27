#ifndef PALINDROMER_CPP
#define PALINDROMER_CPP

#include "PalindromeR.hpp"
#include <string>

int PalindromeR::recursiveTest(std::string s) {
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

int PalindromeR::test_string(const std::string& s) {
    return recursiveTest(simplifyString(s));
}

std::string PalindromeR::simplifyString(std::string s) {
    std::string goodString = "";
    for (char c : s) {
        if (isalpha(c)) {
            goodString += std::tolower(c);
        }
    }
    return goodString;
}

#endif