// symmetric_sum.cpp

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
        for (decltype(ivect.size()) i = 0; i < ivect.size(); ++i)
            std::cout << ivect[i] + ivect[ivect.size() - 1 - i] << std::endl;
    }

    return 0;
}
