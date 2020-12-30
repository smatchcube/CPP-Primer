// sum_sales_item.cpp

#include <iostream>
#include "Sales_item.hpp"

int main()
{
    Sales_item sum_item, item;

    if (std::cin >> sum_item) {
        while (std::cin >> item)
            sum_item += item;
        std::cout << sum_item << std::endl;
        return 0;
    }
    return -1;
}
