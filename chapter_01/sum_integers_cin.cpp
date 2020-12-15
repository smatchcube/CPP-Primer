// sum_integers_cin.cpp

#include <iostream>

int main()
{
    int sum = 0, val = 0;
    std::cout << "Enter numbers:" << std::endl;
    while (std::cin >> val)
	sum += val;
    std:cout << "The sum of these numbers is " << sum << std::endl;
    return 0;
}
