// array_equality.cpp

#include <iostream>

int main()
{
    int v1[3], v2[3];

    std::cout << "Enter the three elements of the first array:" << std::endl;
    for (auto p = std::begin(v1); p != std::end(v1); ++p) {
        if (!(std::cin >> *p)) {
            std::cerr << "Error: bad input" << std::endl;
            return -1;
        }
    }

    std::cout << "Enter the three elements of the second array:" << std::endl;
    for (auto p = std::begin(v2); p != std::end(v2); ++p) {
        if (!(std::cin >> *p)) {
            std::cerr << "Error: bad input" << std::endl;
            return -1;
        }
    }

    if (std::cend(v1) - std::cbegin(v1) != std::cend(v2) - std::cbegin(v2)) {
        std::cout << "Arrays are different" << std::endl;
        return 0;
    }

    for (auto p1 = std::cbegin(v1), p2 = std::cbegin(v2);
         p1 != std::cend(v1); ++p1, ++p2) {
        if (*p1 != *p2) {
            std::cout << "Arrays are different" << std::endl;
            return 0;
        }
    }

    std::cout << "Arrays are equal" << std::endl;
    
    return 0;
}
