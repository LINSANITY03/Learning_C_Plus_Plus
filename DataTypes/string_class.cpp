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

    std::string username = "Pujanaa";
    std::string greetings = "What is up?";
    username += " Thing";
    username.append(". Welcome to programming!");
    // username.insert(3, "          "); // first is the index before inserting
    // username.erase(1, 2);             // index, total removal elements
    // // or we could pass one number to determine removal after the index
    // username.pop_back();               // same as pop(-1) or pop() in python
    // username.replace(0, 3, "okxa ta"); // (start, letter after start, replace_word)
    username.replace(username.find("Thing"), 5, "*****"); // find, words_count, replacing word
    std::cout
        << username.substr(10, 4) << std::endl;
    // return substring from starting index - 10, 4 -elements after starting
    std::cout << username.find_first_of("aeiou") << std::endl;
    // large string of number == npos meaning == -1
    // if not found find__first_of return unsigned long = -1 index
    if (greetings.find_first_of("!") == -1)
    {
        std::cout << "NOT FOUND!" << std::endl;
    }

    if (greetings.compare("What is up?") == 0) // similar as ==
    {
        std::cout << "Equals" << std::endl;
    }

    return 0;
}