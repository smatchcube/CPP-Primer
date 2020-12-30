#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v{10, "hi"};
    
    for (auto e : v)
        std::cout << e << std::endl;
    
    return 0;
}
