// string_comparison.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;
    
    if (std::cin >> s1 >> s2) {
        if (s1 == s2) {
            std::cout << "Both strings are equal." << std::endl;
        } else {
            if (s1 > s2)
                std::cout << "First string is larger." << std::endl;
            else
                std::cout << "Second string is larger." << std::endl;
        }
    }

    return 0;
}
