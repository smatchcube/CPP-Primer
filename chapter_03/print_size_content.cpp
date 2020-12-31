// print_size_content.cpp

#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> ivec = {1, 2 , 3};

    std::cout << "The size of the vector is "
              << ivec.end() - ivec.begin()
              << ".\nHere is the content of this vector:"
              << std::endl;

    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
