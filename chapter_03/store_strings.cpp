// store_strings.cpp

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> svect;
    std::string w;
    
    while (std::cin >> w)
        svect.push_back(w);

    for (auto s : svect)
        std::cout << s << std::endl;
}
