#include <iostream>
#include <float.h>
// make available some constant that we can get values from on how many significant digits
// a data types is trust worthy

int main()
{
    // we can either populate a variable by writing higher number such as
    // 770000 or 7.7E5
    float a = 10.0 / 3; // we need to put decimal in atleast one number
                        // so it does not used int type
    a = a * 10E9;
    // normally a is printed as 3.33333e+10 so used std::fixed to show fixed number

    std::cout << std::fixed << a << std::endl; // 33333331968.000000
    std::cout << FLT_DIG << std::endl;         // 6 we can trust float upto six digits
    std::cout << DBL_DIG << std::endl;         // upto 15 digits
    std::cout << LDBL_DIG << std::endl;        // upto 18 digits
    std::cout << DECIMAL_DIG << std::endl;     // upto 21 digits
    double b;
    long double c;

    int cents = 440;
    // it is good practice to store in cents rather than dollar+cents
    // to mitigate the untrustworthyness of data type
    return 0;
}