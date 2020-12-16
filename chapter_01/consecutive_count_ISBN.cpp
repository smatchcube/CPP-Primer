// consecutive_count_ISBN.cpp

#include <iostream>
#include "Sales_item.hpp"

int main()
{
    Sales_item curr_item, item;
    if (std::cin >> curr_item) {
	int cnt = 1;
	while (std::cin >> item) {
	    if (item.isbn() == curr_item.isbn())
		++cnt;
	    else {
		std::cout << curr_item.isbn() << " ISBN occurs "
			  << cnt << " times" << std::endl;
		curr_item = item;
		cnt = 1;
	    }
	}
	std::cout << curr_item.isbn() << " ISBN occurs "
		  << cnt << " times" << std::endl;
    }
    return 0;
}
