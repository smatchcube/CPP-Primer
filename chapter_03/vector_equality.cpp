// vector_equality.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1, v2 = {1, 2, 3};
    int t;

    std::cout << "Enter the elements of the vector:" << std::endl;
    while (std::cin >> t)
        v1.push_back(t);

    if (v1 == v2)
        std::cout << "Arrays are equal" << std::endl;
    else
        std::cout << "Arrays are different" << std::endl;
    
    return 0;
}
