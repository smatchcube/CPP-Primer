// copy_vector.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv1, iv2;
    for (int i = 0; i < 10; ++i)
        iv1.push_back(i);

    iv2 = iv1;
    
    for (auto i : iv2)
        std::cout << i << " ";
    std::cout << std::endl;
    
    return 0;
}
