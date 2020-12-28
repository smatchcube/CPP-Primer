// auto_2.cpp

#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    // i = 0; // must not compile because i is const

    j = 0; // legal because j is a non const int

    std::cout << k << std::endl; // 42 because k is a reference to i
    // k = 3; // must not compile because k is a const reference

    std::cout << *p << std::endl; // 42
    // *p = 5; // must not compile as p is a pointer to const int
    p = nullptr; // works because p has no top-level const

    // j2 = 0; // illegal because j2 is const
    
    std::cout << k2 << std::endl; // 42
    // k2 = 7; // must not compile because k2 is a const reference
    
    return 0;
}
