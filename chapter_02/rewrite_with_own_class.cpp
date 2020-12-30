// rewrite_with_own_class.cpp

#include <string>
#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int exercise_1_20()
{
    Sales_data s;
    double price;
    while (std::cin >> s.bookNo >> s.units_sold >> price) {
        s.revenue = s.units_sold * price;
        std::cout << s.bookNo << " " << s.units_sold << " "
                  << s.revenue << " " << price << std::endl;
    }
    return 0;
}

int exercise_1_21()
{
    Sales_data s1, s2;
    double price1, price2;

    if (std::cin >> s1.bookNo >> s1.units_sold >> price1 &&
        std::cin >> s2.bookNo >> s2.units_sold >> price2 &&
        s1.bookNo == s2.bookNo) {
        s1.revenue = s1.units_sold * price1 + s2.units_sold * price2;
        s1.units_sold += s2.units_sold;
        std::cout << s1.bookNo << " " << s1.units_sold << " "
                  << s1.revenue << " ";
        if (s1.units_sold != 0)
            std::cout << s1.revenue / s1.units_sold << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    }
    std::cerr << "Can't sum Sales_data: input error or ISBN are differents" << std::endl;
    return -1;
}

int exercise_1_22()
{
    Sales_data s, tmp;
    double price;
    if (std::cin >> s.bookNo >> s.units_sold >> price) {
        s.revenue = s.units_sold * price;
        while (std::cin >> tmp.bookNo >> tmp.units_sold >> price) {
            if (tmp.bookNo == s.bookNo) {
                s.units_sold += tmp.units_sold;
                s.revenue += tmp.units_sold * price;
            } else {
                std::cerr << "Error: can't add transactions for differents ISBN"
                          << std::endl;
                return -1;
            }
        }
        std::cout << s.bookNo << " " << s.units_sold
                  << " " << s.revenue << " ";
        if (s.units_sold != 0)
            std::cout << s.revenue / s.units_sold << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
    }
    return 0;
}

int main()
{
    // return exercise_1_20();
    // return exercise_1_21();
    return exercise_1_22();
}
