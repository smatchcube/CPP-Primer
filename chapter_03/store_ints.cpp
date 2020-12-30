// store_ints.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivect;
    int n;
    
    while (std::cin >> n)
        ivect.push_back(n);

    for (auto i : ivect)
        std::cout << i << std::endl;
}
