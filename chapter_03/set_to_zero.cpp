// set_to_zero.cpp

#include <iostream>

int main()
{
    int arr[10];
    for (auto p = std::begin(arr); p != std::end(arr); ++p)
        *p = 0;

    for (auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
