#include <iostream>
#include <climits>

int main()
{
    short a;
    int b;       // least 16bit to 32bit
    long c;      // least 32bit to 64bit
    long long d; // least 64bit to 128bit
    std::cout << sizeof(long long) << std::endl;
    // short <= int <= long <= long long

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    std::cout << SHRT_MIN << std::endl;   // 32767 to -32768
    std::cout << USHRT_MAX << std::endl;  // 0 to 65535
    std::cout << ULONG_MAX << std::endl;  // 0 to 4294967295
    std::cout << ULLONG_MAX << std::endl; // 0 to 18446744073709551615
    return 0;
}