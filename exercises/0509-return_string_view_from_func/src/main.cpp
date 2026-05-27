#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolNameUB(bool b)
{
    std::string t { "true" };   // local variable
    std::string f { "false" };  // local variable

    if (b)
        return t;  // return a std::string_view viewing t

    return f;  // return a std::string_view viewing f
}  // t and f are destroyed at the end of the function

std::string_view getBoolName(bool b)
{
    if (b)
        return "true";  // return a std::string_view viewing "true"

    return "false";  // return a std::string_view viewing "false"
}  // "true" and "false" are not destroyed at the end of the function

std::string_view firstAlphabetical(std::string_view s1, std::string_view s2)
{
    if (s1 < s2)
        return s1;
    return s2;
}

int main()
{
    std::cout << getBoolNameUB(true) << ' ' << getBoolNameUB(false) << '\n';
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';

    std::string a { "World" };
    std::string b { "Hello" };

    std::cout << firstAlphabetical(a, b) << '\n';

    return 0;
}
