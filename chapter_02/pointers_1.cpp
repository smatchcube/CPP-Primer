// pointers_1.cpp

#include <iostream>

int main()
{
    int x = 3, y = 5;
    int *p = &x, *q = p;
    std::cout << *p << std::endl;

    p = &y; // change the value of a pointer
    std::cout << *p << std::endl;     // now p points to y
    std::cout << (p == q) << std::endl; // 0, the value of p changed

    q = p;
    *p = 7; // change the value to which p points
    std::cout << y << std::endl; // y was modified using p
    std::cout << (p == q) << std::endl; // 1, the value of p did not changed

    return 0;
}

    
