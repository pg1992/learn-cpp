#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x {};
    std::cin >> x;

    return x;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char op {};
    std::cin >> op;

    return op;
}

void printResult(double x, char op, double y)
{
    double result {};

    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;
    else
        return;

    std::cout << x << ' ' << op << ' ' << y << " is " << result << ".\n";
}

int main()
{
    double x { getDouble() };
    double y { getDouble() };

    char op { getOperator() };

    printResult(x, op, y);

    return 0;
}
