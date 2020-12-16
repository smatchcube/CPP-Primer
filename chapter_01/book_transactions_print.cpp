// book_transactions_print.cpp

#include <iostream>
#include "Sales_item.hpp"

int main()
{
    std::cout << "Enter book sales transactions:" << std::endl;
    Sales_item book;
    while (std::cin >> book)
	std::cout << book << std::endl;
    return 0;
}
