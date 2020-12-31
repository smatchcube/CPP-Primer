// for_loop.cpp

#include <iostream>

int main()
{
    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 1, 1, 1}};

    for (auto &col : ia) {
        for (auto i : col)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (auto row = 0; row < 3; ++row) {
        for (auto col = 0; col < 4; ++col)
            std::cout << ia[row][col] << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (auto p = std::cbegin(ia); p != std::cend(ia); ++p) {
        for (auto q = std::cbegin(*p); q != std::cend(*p); ++q)
            std::cout << *q << " ";
        std::cout << std::endl;
    }
                                
    return 0;
}
