// postfix.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec {7, 8, 9};
    std::vector<int>::size_type cnt = ivec.size();
    //  assign values from size...1 to the elements in ivec
    for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;

    for (int i : ivec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
    
