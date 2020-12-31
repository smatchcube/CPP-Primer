// vector_from_array.cpp

#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> vec{1, 2, 3};
    int arr[3];

    for (std::size_t i = 0; i < 3; ++i)
        arr[i] = vec[i];

    for (auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
