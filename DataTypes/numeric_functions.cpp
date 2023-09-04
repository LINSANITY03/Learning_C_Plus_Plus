#include <iostream>
#include <cmath>

int main()
{
    std::cout << sqrt(25) << std::endl;            // 5
    std::cout << sqrt(-25) << std::endl;           // nan
    std::cout << pow(9, 999) << std::endl;         // inf
    std::cout << pow(-9, 999) << std::endl;        // -inf
    std::cout << NAN << std::endl;                 // nan
    std::cout << INFINITY << std::endl;            // inf
    std::cout << remainder(10, 3.25) << std::endl; // 0.25 can used float in div
    // remainder value is rounded towards nearest integral value
    std::cout << fmod(10, 3.25) << std::endl;
    // fmod is rounded towards zero
    std::cout << fmax(19, 22) << std::endl; // 22
    std::cout << ceil(3.25) << std::endl;   // 4 upper integer
    std::cout << floor(-3.25) << std::endl; // -4 lower integer
    std::cout << trunc(-3.25) << std::endl; // -3 cut the decimal half
    std::cout << round(-3.49) << std::endl; // -3 closest integer
}