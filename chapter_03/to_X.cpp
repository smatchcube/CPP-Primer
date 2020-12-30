// to_X.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s("Foo bar");

    for (auto &c : s)
        c = 'X';

    std::cout << s << std::endl;

    return 0;
}
