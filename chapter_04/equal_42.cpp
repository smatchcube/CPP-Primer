// equal_42.cpp

#include <iostream>

int main()
{
    int i = 0;

    std::cout << "Try to find the special int between 0 and 100:" << std::endl;
    
    while ((std::cin >> i) && i != 42) {
        std::cout << "Incorrect, input error or wrong number!"
                  << "Think harder and try again:" << std::endl;
    }

    if (i == 42) {
        std::cout << "Correct number!" << std::endl;
        return 0;
    } else {
        std::cerr << "Input error." << std::endl;
        return -1;
    }
}
