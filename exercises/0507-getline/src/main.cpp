#include <iostream>
#include <string>

int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ", you picked " << choice << ".\n";

    // casting return of length
    int length { static_cast<int>(name.length()) };
    std::cout << "The name '" << name << "' has " << length << " characters.\n";

    // using string_literal suffix
    using namespace std::string_literals;
    std::cout << "some name"s.length() << ".\n";

    return 0;
}
