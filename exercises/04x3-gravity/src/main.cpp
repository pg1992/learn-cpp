#include <iostream>

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x {};
    std::cin >> x;

    return x;
}

void printResult(double x_seconds, double initialHeight)
{
    double gravity { 9.8 };
    double distanceFallen { gravity * x_seconds * x_seconds / 2.0 };

    std::cout << "At " << x_seconds << " seconds, ";
    if (distanceFallen < initialHeight)
        std::cout << "the ball is at height: " << initialHeight - distanceFallen << " meters.\n";
    else
        std::cout << "the ball is on the ground.\n";

}

void printAll(double initialHeight)
{
    printResult(0.0, initialHeight);
    printResult(1.0, initialHeight);
    printResult(2.0, initialHeight);
    printResult(3.0, initialHeight);
    printResult(4.0, initialHeight);
    printResult(5.0, initialHeight);
}

int main()
{
    double initialHeight { getTowerHeight() };

    printAll(initialHeight);

    return 0;
}
