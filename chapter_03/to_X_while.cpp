// to_X_while.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s("Foo bar");

    decltype(s.size()) i = 0;
    while (i < s.size()) {
        s[i] = 'X';
        ++i;
    }

    std::cout << s << std::endl;

    return 0;
}
