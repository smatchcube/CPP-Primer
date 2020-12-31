// compare_cstrings.cpp

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string s1, s2;

    std::cout << "Enter two strings, one per line:" << std::endl;
    
    if (std::getline(std::cin, s1) && std::getline(std::cin, s2)) {
        const char *p1 = s1.c_str(), *p2 = s2.c_str();
        int cmp = std::strcmp(p1, p2);
        if (cmp < 0)
            std::cout << "The first string is less than the second string.";
        else if (cmp == 0)
            std::cout << "Both strings are equal.";
        else std::cout << "The first string is greater than the second one.";
        std::cout << std::endl;
    }

    return 0;
}
