// cstrings_cat.cpp

#include <iostream>
#include <cstring>

int main()
{
    constexpr const char s1[] = "Hello, ";
    constexpr const char s2[] = "World!";
    char s3[14];

    std::strcpy(s3, s1);
    std::strcat(s3, s2);

    std::cout << s3 << std::endl;

    return 0;
}
