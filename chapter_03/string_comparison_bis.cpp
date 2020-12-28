// string_comparison_bis.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;
    
    if (std::cin >> s1 >> s2) {
	if (s1.size() == s2.size()) {
	    std::cout << "Both strings have the same size." << std::endl;
	} else {
	    if (s1.size() > s2.size())
		std::cout << "First string is longer." << std::endl;
	    else
		std::cout << "Second string is longer." << std::endl;
	}
    }

    return 0;
}
