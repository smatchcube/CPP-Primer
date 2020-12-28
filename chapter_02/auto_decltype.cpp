// auto_decltype.cpp

int main()
{
    int i = 0;
    int *pi = &i;

    // here i1 and i2 are of the same type
    decltype(i) i1 = 0;
    auto i2 = 0;
    
    decltype(*pi) ri = *pi;
    // ri is a reference to an int, we can check this by removing the
    // initializer and getting a compile time error
    auto j = *pi; // pi is an int, the type is different from ri

    return 0;
}
