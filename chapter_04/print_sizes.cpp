#include <iostream>

int main()
{
    
    std::cout << "    type     |   size\n"
              << "-------------|----------\n"
              << " bool        |  " << sizeof(bool)        << "\n"
              << " char        |  " << sizeof(char)        << "\n"
              << " wchar_t     |  " << sizeof(wchar_t)     << "\n"
              << " char16_t    |  " << sizeof(char16_t)    << "\n"
              << " char32_t    |  " << sizeof(char32_t)    << "\n"
              << " short       |  " << sizeof(short)       << "\n"
              << " int         |  " << sizeof(int)         << "\n"
              << " long        |  " << sizeof(long)        << "\n"
              << " long long   |  " << sizeof(long long)   << "\n"
              << " float       |  " << sizeof(float)       << "\n"
              << " double      |  " << sizeof(double)      << "\n"
              << " long double |  " << sizeof(long double) << "\n";
    return 0;
}
