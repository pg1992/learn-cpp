#include <iomanip>  // for output manipulator std::setprecision()
#include <iostream>

int main()
{
    double zero { 0.0 };

    double posinf { 5.0 / zero };  // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero };  // negative infinity
    std::cout << neginf << '\n';

    double pos0 { 0.0 / posinf };  // positive zero
    std::cout << pos0 << '\n';

    double neg0 { zero / neginf };  // negative zero
    std::cout << neg0 << '\n';

    double nan { zero / zero };  // not a number (mathematically invalid)
    std::cout << nan << '\n';

    // only have 6 significant digits
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    std::cout << std::setprecision(17);  // show 17 digits of precision
    std::cout << 3.333333333333333333333333333333f << '\n';  // f suffix means float
    std::cout << 3.333333333333333333333333333333  << '\n';  // no suffix means double

    return 0;
}
