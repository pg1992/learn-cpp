int main()
{
    [[maybe_unused]] int a;          // default-initialization (no initializer)

    // Traditional initialization forms:
    [[maybe_unused]] int b = 5;      // copy-initialization (initial value after equals sign)
    [[maybe_unused]] int c ( 6 );    // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    [[maybe_unused]] int d { 7 };    // direct-list-initialization (initial value in braces)
    [[maybe_unused]] int e {};       // value-initialization (empty braces)

    // list-initialization
    [[maybe_unused]] int width { 5 };       // direct-list-initialization of initial value 5 into variable width (preferred)
    [[maybe_unused]] int height = { 6 };    // copy-list-initialization of initial value 6 into variable height (rarely used)

    // int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion
    // int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    // int w3 (4.5);   // compiles: w3 direct-initialized to value 4

    return 0;
}
