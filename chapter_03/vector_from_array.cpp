// vector_from_array.cpp

#include <iostream>
#include <vector>

int main()
{
    const int arr[3] = {1, 2, 3};
    const std::vector<int> vec(std::begin(arr), std::end(arr));

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
