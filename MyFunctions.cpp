#include <string>

std::string simplifyString(std::string s) {
    std::string goodString = "";
    for (char c : s) {
        if (isalpha(c)) {
            goodString += std::tolower(c);
        }
    }
    return goodString;
}