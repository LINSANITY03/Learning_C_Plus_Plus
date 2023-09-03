#include <iostream>
#include <cmath>

int main()
{

    int baseNumber;
    int powerNumber;

    std::cout << "Enter the baseNumber:";
    std::cin >> baseNumber;
    std::cout << "Enter the powerNumber:";
    std::cin >> powerNumber;

    double power = pow(baseNumber, powerNumber);
    std::cout << power << std::endl;
    return 0;
}