#include <iostream>
#include <string>

int main()
{
    // there is two types of string - 1.string 2.c-string
    std::string greeting = "hello";
    std::cout << greeting + " guys" << std::endl; // concatinate texts
    std::cout << greeting.length() << std::endl;  // 5

    char name[6] = "Pujan"; // c string == array of characters "Pujan\0"
    // P u j a n \0 => 6 elements

    std::string in_greeting;
    std::cin >> in_greeting;
    std::cout << in_greeting << std::endl;

    return 0;
}