#include <iostream>
#include <cmath>

double power(double, int); // declaration

int main()
{

    int baseNumber;
    int powerNumber;

    std::cout << "Enter the baseNumber:";
    std::cin >> baseNumber;
    std::cout << "Enter the powerNumber:";
    std::cin >> powerNumber;

    double myPower = power(baseNumber, powerNumber);
    std::cout << myPower << std::endl;
    return 0;
}

// making our custom power function
double power(double base, int expo)
{
    double result = 1;

    // creating simple loop
    for (int i = 0; i < expo; i++)
    {
        result = result * base;
    }
    return result;
}
