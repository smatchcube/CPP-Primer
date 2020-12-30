// sum_50_100_using.cpp

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned sum = 0;
    for (unsigned i = 50; i <= 100; ++i)
        sum += i;
    cout << sum << endl;
    return 0;
}
