#include <iostream>
#include <string>
#include <string_view>

void printString(std::string str)   // str makes a copy of its initializer
{
    std::cout << str << '\n';
}

void printSV(std::string_view str)  // now a std::string_view, creates a view of the argument
{
    std::cout << str << '\n';
}

int main()
{
    std::string s{ "Hello, world!" };
    printString(s);

    printSV("Hello, world!"); // call with a C-style string literal

    std::string s2{ "Hello, world!" };
    printSV(s2); // call with std::string

    std::string s3{ s2 };
    printSV(s3); // call with std::string_view

    return 0;
}
