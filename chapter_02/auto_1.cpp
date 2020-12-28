// auto_1.cpp

#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    std::cout << "a: " << a << std::endl;
    a = 42;
    std::cout << "a: " << a << std::endl;

    std::cout << "b: " << b << std::endl;
    b = 42;
    std::cout << "b: " << b << std::endl;

    std::cout << "c: " << c << std::endl;
    c = 42;
    std::cout << "c: " << c << std::endl;

    // // will not compile due to incompatible types
    // std::cout << "d: " << d << std::endl;
    // d = 42;
    // std::cout << "d: " << d << std::endl;

    // // will not compile due to incompatible types
    // std::cout << "e: " << e << std::endl;
    // e = 42;
    // std::cout << "e: " << e << std::endl;

    // // will not compile due to incompatible types
    // std::cout << "g: " << g << std::endl;
    // g = 42;
    // std::cout << "g: " << g << std::endl;
    
    return 0;
}
    
