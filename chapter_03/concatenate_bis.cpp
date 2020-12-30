// concatenate.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s, tmp;

    if (std::cin >> tmp) {
        s += tmp;
        while (std::getline(std::cin, tmp))
            s += " " + tmp;
    }

    std::cout << s << std::endl;

    return 0;
}
