#include <iostream>
#include "balance.hpp"

int main()
{
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "Is string balanced: " << balance("[]{}") << std::endl;

    system("PAUSE");
    return 0;
}