// compare_strings.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;

    std::cout << "Enter two strings, one per line:" << std::endl;
    
    if (std::getline(std::cin, s1) && std::getline(std::cin, s2)) {
        if (s1 < s2)
            std::cout << "The first string is less than the second string.";
        else if (s1 == s2)
            std::cout << "Both strings are equal.";
        else std::cout << "The first string is greater than the second one.";
        std::cout << std::endl;
    }

    return 0;
}
