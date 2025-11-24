#include <format>   // C++20
#include <bitset>   // for std::bitset
#include <iostream>
#include <print>    // C++23

void printBase()
{
    int x { 12 };
    std::cout << x << '\n';                 // decimal (by default)
    std::cout << std::hex << x << '\n';     // hexadecimal
    std::cout << x << '\n';                 // now hexadecimal
    std::cout << std::oct << x << '\n';     // octal
    std::cout << std::dec << x << '\n';     // return to decimal
    std::cout << x << '\n';                 // decimal
}

void printBitset()
{
    // std::bitset<8> means we want to store 8 bits
    std::bitset<8> bin1 { 0b1100'0101 };    // binary literal for binary 1100 0101
    std::bitset<8> bin2 { 0xC5 };           // hexadecimal literal for binary 1100 0101

    std::cout << bin1 << '\n' << bin2 << '\n';
    std::cout << std::bitset<4>{ 0b1010 } << '\n';
}

int main()
{
    printBase();
    printBitset();

    return 0;
}
