// syntax_error.cpp

#include <iostream>

int main()
{
    // error: missing quote
    std::cout << "Hello, World << std::endl;
    return 0;
}
