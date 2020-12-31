// array_of_positions.cpp

#include <iostream>

int main()
{
    int ia[10];
    for (int i = 0; i < 10; ++i)
        ia[i] = i;

    for (auto i : ia)
        std::cout << i << " ";
    std::cout << std::endl;
    
    return 0;
}
