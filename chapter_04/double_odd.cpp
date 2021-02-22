// double_odd.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    for (auto &ri : vec) {
        if (ri % 2 == 1)
            ri *= 2;
    }

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
