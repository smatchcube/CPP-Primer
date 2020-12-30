// three_ways.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1(10, 42);

    std::vector<int> v2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    std::vector<int> v3;
    for (size_t i = 0; i < 10; ++i)
        v3.push_back(42);

    if (v1 == v2 && v2 == v3)
        std::cout << "Everything OK!" << std::endl;
    else
        std::cout << "Something wrong!" << std::endl;

    return 0;
}
