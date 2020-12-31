// copy_array.cpp

#include <iostream>

int main()
{
    int ia1[10], ia2[10];
    for (int i = 0; i < 10; ++i)
        ia1[i] = i;

    for (std::size_t i = 0; i < 10; ++i)
        ia2[i] = ia1[i];
    
    for (auto i : ia2)
        std::cout << i << " ";
    std::cout << std::endl;
    
    return 0;
}
