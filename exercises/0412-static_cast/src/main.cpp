#include <cstdint>
#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    print( static_cast<int>(5.5) );  // explicitly convert double value 5.5 to an int

    char ch { 97 };  // 97 is ASCII code for 'a'
    // print value of variable ch as int
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

    unsigned int u1 { 5 };
    // Convert value of u1 to a signed int
    int s1 { static_cast<int>(u1) };
    std::cout << s1 << '\n';  // prints 5

    int s2 { 5 };
    // Convert value of s2 to an unsigned int
    unsigned int u2 { static_cast<unsigned int>(s2) };
    std::cout << u2 << '\n';  // prints 5

    int s { -1 };
    std::cout << static_cast<unsigned int>(s) << '\n';  // prints 4294967295

    unsigned int u { 4294967295 };  // largest 32-bit unsigned int
    std::cout << static_cast<int>(u) << '\n';  // implementation-defined prior to C++20, -1 as of C++20

    std::int8_t myInt { 65 };    // initialize myInt with value 65
    std::cout << static_cast<int>(myInt) << '\n';  // you're probably expecting this to print 65

    return 0;
}
