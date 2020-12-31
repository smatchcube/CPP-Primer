// twice_iterator.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivect;

    for (int i = 1; i <= 10; ++ i)
        ivect.push_back(i);

    for (auto it = ivect.begin(); it != ivect.end(); ++it)
        *it *= 2;

    for (auto e : ivect)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
        
