// remove_punctuation.cpp

#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string input, output;

    if (getline(std::cin, input)) {
        for (auto c : input) {
            if (!std::ispunct(c))
                output += c;
        }
    }

    std::cout << output << std::endl;

    return 0;
}
