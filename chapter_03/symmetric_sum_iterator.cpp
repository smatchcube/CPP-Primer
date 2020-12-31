// symmetric_sum_iterator.cpp

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter a list of integers:" << std::endl;

    std::vector<int> ivect;
    int i;
    
    while (std::cin >> i)
        ivect.push_back(i);

    if (!ivect.empty()) {
        auto it_e = ivect.cend() - 1;
        for (auto it_b = ivect.cbegin(); it_b != ivect.cend(); ++it_b, --it_e)
            std::cout << *it_b + *it_e << std::endl;
    }

    return 0;
}
