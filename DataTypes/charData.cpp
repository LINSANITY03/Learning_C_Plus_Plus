#include <iostream>

int main()
{
    char x = 'a'; // by default char is signed
    unsigned char y = 129;
    std::cout << x << (int)x << std::endl;
    std::cout << y << std::endl;
    return 0;
}