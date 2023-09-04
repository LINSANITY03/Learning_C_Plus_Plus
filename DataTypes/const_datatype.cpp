#include <iostream>
#define X 10 // also known as macro is to use define header
int main()
{
    const int x = 5;
    // x = 4; cannot be changed
    std::cout << x << std::endl;
    std::cout << typeid(X).name() << std::endl;

    enum
    {
        y = 25
    };
    std::cout << y << std::endl;
}