// print_text_uppercase.cpp

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
    std::vector<std::string> text = {
        "Hello, World!",
        "Nice to see you!",
        "",
        "Goodbye, World!"
    };

    for (auto it_vect = text.begin();
         it_vect != text.cend() && !it_vect->empty(); ++it_vect) {
        for (auto it_str = it_vect->begin(); it_str != it_vect->cend(); ++it_str)
            *it_str = std::toupper(*it_str);
    }

    for (auto it_vect =  text.cbegin(); it_vect != text.cend(); ++it_vect)
        std::cout << *it_vect << std::endl;

    return 0;
}
        
    
    

    
