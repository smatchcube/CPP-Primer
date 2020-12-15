// print_range_with_for.cpp

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    for (int v = v1; v <= v2; ++v)
	std::cout << v << std::endl;
    return 0;
}
