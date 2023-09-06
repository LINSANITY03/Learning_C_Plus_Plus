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
    std::getline(std::cin, in_greeting); // getline for getting all input strings
    std::cout << in_greeting << std::endl;

    std::string username = "Pujan";
    username += " Thing";
    username.append(". Welcome to programming!");
    username.insert(3, "          "); // first is the index before inserting
    username.erase(1, 2);             // index, total removal elements
    // or we could pass one number to determine removal after the index
    username.pop_back();               // same as pop(-1) or pop() in python
    username.replace(0, 3, "okxa ta"); // (start, letter after start, replace_word)
    std::cout
        << username << std::endl;

    return 0;
}