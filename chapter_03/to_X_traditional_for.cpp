// to_X_traditional_for.cpp

#include <iostream>
#include <string>

int main()
{
    std::string s("Foo bar");

    for (decltype(s.size()) i = 0; i < s.size(); ++i)
        s[i] = 'X';
    
    std::cout << s << std::endl;

    return 0;
}
