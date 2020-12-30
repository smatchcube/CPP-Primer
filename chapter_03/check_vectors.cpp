// check_vectors.cpp

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::vector<int>> vv1 = {v1, v2, v3, v4, v5};

    for (const auto &v : vv1) {
        for (auto i : v)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};
    std::vector<std::vector<std::string>> vv2 = {v6, v7};
    
    for (const auto &v : vv2) {
        for (auto s : v)
            std::cout << s << " ";
        std::cout << std::endl;
    }

    return 0;
}
