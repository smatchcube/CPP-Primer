// concatenate.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s, tmp;

    while (std::cin >> tmp)
        s += tmp;

    std::cout << s << std::endl;

    return 0;
}
