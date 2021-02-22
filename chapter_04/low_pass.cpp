// low_pass.cpp

#include <iostream>

int main()
{
    const int grade = 70;
    const char * const finalgrade_conditional =
        (grade > 90) ? "high pass"
                     : (grade > 75) ? "pass"
                                    : (grade >= 60) ? "low pass"
                                                    : "fail";
    const char *finalgrade_if;
    if (grade > 90)
        finalgrade_if = "high pass";
    else if (grade > 75)
        finalgrade_if = "pass";
    else if (grade >= 60)
        finalgrade_if = "low pass";
    else
        finalgrade_if = "fail";

    std::cout << finalgrade_conditional << std::endl
              << finalgrade_if << std::endl;

    return 0;
}
