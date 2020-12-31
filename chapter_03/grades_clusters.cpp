// grades_clusters.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade) {
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);
    }

    for (auto it = scores.cbegin(); it != scores.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
        
