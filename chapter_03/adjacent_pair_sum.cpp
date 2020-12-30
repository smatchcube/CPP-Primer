// adjacent_pair_sum.cpp

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter a list of integers:" << std::endl;

    std::vector<int> ivect;
    int i;
    
    while (std::cin >> i)
        ivect.push_back(i);

    for (decltype(ivect.size()) i = 0; i + 1 < ivect.size(); ++i)
        std::cout << ivect[i] + ivect[i + 1] << std::endl;

    std::cout << std::endl;
    
    return 0;
}
