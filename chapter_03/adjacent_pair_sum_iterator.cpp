// adjacent_pair_sum_iterator.cpp

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter a list of integers:" << std::endl;

    std::vector<int> ivect;
    int i;

    while (std::cin >> i)
        ivect.push_back(i);

    for (auto it = ivect.cbegin(); it + 1 != ivect.cend(); ++it)
        std::cout << *it + *(it + 1) << std::endl;

    return 0;
}
