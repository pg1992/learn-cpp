#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    int doubleNum{ num * 2 };  // define a new variable and initialize it with num * 2
    std::cout << "Double that number is: " << doubleNum << '\n';

    return 0;
}
