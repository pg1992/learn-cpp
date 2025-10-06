#include <iostream> // for std::cout

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}

// Definition of user-defined function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();                          // Interrupt main() by making a function call to doPrint.  main() is the caller.
    doPrint();                          // doPrint() called for the second time
    std::cout << "Ending main()\n";     // This statement is executed after doPrint() ends

    return 0;
}
