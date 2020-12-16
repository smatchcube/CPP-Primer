// sum_two_sales_item.cpp

#include <iostream>
#include "Sales_item.hpp"

int main()
{
    Sales_item item1, item2;

    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
