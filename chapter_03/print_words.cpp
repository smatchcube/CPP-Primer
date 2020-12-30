// print_words.cpp

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

int main()
{
    std::cout << "Enter a list of words:" << std::endl;

    std::vector<std::string> svect;
    std::string w;

    while (std::cin >> w)
        svect.push_back(w);

    for (auto &s : svect) {
        for (auto &c : s)
            c = std::toupper(c);
    }

    unsigned i = 1;
    for (auto &s : svect) {
        std::cout << s;
        if (i % 8 == 0)
            std::cout << std::endl;
        else
            std::cout << " ";
        ++i;
    }
    if (i % 8 != 1)
        std::cout << std::endl;

    return 0;
}
    
