#include <iostream>

int main()
{
    std::cout << "Input a boolean (true/false): ";

    bool b { };
    std::cin >> std::boolalpha;  // input bool as "true" or "false"
    std::cin >> b;

    std::cout << std::boolalpha;
    std::cout << "You entered: " << b << '\n';

    std::cout << "Input an int: ";
    int i {};
    std::cin >> i;
    std::cout << "You entered int: " << i << '\n';

    return 0;
}
