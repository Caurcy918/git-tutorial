#include <iostream>

int main()
{
    int y = 5;
    int8_t x = 8;
    auto f = [=]()
    {
        return x + y;
    };
    std::cout << "Result: " << f() << '\n'; // Output: Result: 13
    std::cout << "Result: " << f() << "Salut" << '\n'; // Output: Result: 13Salut

    y = 10;
    x = 15;main();
    std::cout << "Result: " << f() << '\n'; // Output: Result: 13
    std::cout << "Result: " << f() << "Salut" << '\n'; //

    return 0;
}