// for_loop_type_alias.cpp

#include <iostream>

int main()
{
    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 1, 1, 1}};

    using ref_array_const_int = const int (&)[4];
    for (ref_array_const_int col : ia) {
        for (int i : col)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (std::size_t row = 0; row < 3; ++row) {
        for (std::size_t col = 0; col < 4; ++col)
            std::cout << ia[row][col] << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    using pointer_array_const_int = const int (*)[4];
    using pointer_const_int = const int *;
    for (pointer_array_const_int p = std::cbegin(ia); p != std::cend(ia); ++p) {
        for (pointer_const_int q = std::cbegin(*p); q != std::cend(*p); ++q)
            std::cout << *q << " ";
        std::cout << std::endl;
    }
                                
    return 0;
}
