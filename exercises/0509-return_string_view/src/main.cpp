#include <iostream>
#include <string>
#include <string_view>

std::string getName()
{
    std::string s{ "Alex" };
    return s;
}

int main()
{
    std::string_view sv{};

    { // create a nested block
        std::string s{ "Hello, world!" }; // create a std::string local to this nested block
        sv = s;
    } // s is destroyed here, so sv is now viewing an invalid string

    std::cout << sv << '\n';


    std::string_view name{ getName() }; // name initialized with return value of function
    std::cout << name << '\n'; // undefined behavior


    using namespace std::string_literals;
    std::string_view name2 { "Alex"s }; // "Alex"s creates a temporary std::string
    std::cout << name2 << '\n'; // undefined behavior


    std::string s2 { "Hello, world!" };
    std::string_view sv2 { s2 }; // sv2 is now viewing s2
    s2 = "Hello, a!"; // modifies s2, which invalidates sv2 (s2 is still valid)
    std::cout << sv2 << '\n'; // undefined behavior


    return 0;
}
