#include <iostream>

int main()
{
    // can be used as a flag
    bool is_uploaded = true;
    // if we want to output true/false rather than number
    // use std::boolalpha
    std::cout << std::boolalpha << is_uploaded << std::endl;

    if (true)
    {
        std::cout << "It is true" << std::endl;
    }
    return 0;
}