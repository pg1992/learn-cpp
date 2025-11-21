#include <cstdint>
#include <iomanip>
#include <iostream>

int main()
{
    std::int8_t x { 65 };
    std::cout << x << '\n'; // won't print 65, but 'A' (treated as signed char)

    std::cout << std::left;
    std::cout << std::setw(12) << "least 8:" << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "least 16:" << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "least 32:" << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "least 64:" << sizeof(std::int_least64_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << std::setw(12) << "fast 8:" << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "fast 16:" << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "fast 32:" << sizeof(std::int_fast32_t) * 8 << " bits\n";
    std::cout << std::setw(12) << "fast 64:" << sizeof(std::int_fast64_t) * 8 << " bits\n";

    return 0;
}
