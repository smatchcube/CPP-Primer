// chained_greater.cpp

#include <iostream>

int main()
{
    int a = 4, b = 3, c = 2, d = 1;

    if (a > b && b > c && c > d)
        std::cout << "a > b > c > d" << std::endl;
    else
        std::cout << "b > a or c > b or d > c" << std::endl;

    return 0;
}
