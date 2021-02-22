// even_odd.cpp

#include <iostream>

int main()
{
    std::cout << "Enter an integer:" << std::endl;

    int i;
    if (std::cin >> i) {
        if (i % 2)
            std::cout << i << " is odd!" << std::endl;
        else
            std::cout << i << " is even!" << std::endl;
    } else {
        std::cerr << "Input error" << std::endl;
        return -1;
    }
    
    return 0;
}
    
