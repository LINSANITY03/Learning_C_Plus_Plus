#include <iostream>
#include <cmath>

double power(double, int); // declaration
void print_pow(double, int);

int main()
{

    double baseNumber;
    int powerNumber;

    std::cout << "Enter the baseNumber:";
    std::cin >> baseNumber;
    std::cout << "Enter the powerNumber:";
    std::cin >> powerNumber;

    print_pow(baseNumber, powerNumber);
    return 0;
}

void print_pow(double base, int expo)
{
    double myPower = power(base, expo);
    std::cout << base << " raised to the " << expo << " power is " << myPower << std::endl;
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
