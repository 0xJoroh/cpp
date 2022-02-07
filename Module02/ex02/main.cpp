#include "./Fixed.hpp"

int main(void)
{
    Fixed a(1);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    // comparison operators:
    std::cout << "Comparison Operators (a, b)" << std::endl;
    std::cout << "---------- a = " << a << " --- b = " << b << " ----------" << std::endl;
    if (a > b)
        std::cout << "a > b: true" << std::endl;
    if (a < b)
        std::cout << "a < b : true" << std::endl;
    if (a >= b)
        std::cout << "a >= b : true" << std::endl;
    if (a <= b)
        std::cout << "a <= b : true" << std::endl;
    if (a == b)
        std::cout << "a == b : true" << std::endl;
    if (a != b)
        std::cout << "a != b : true" << std::endl;
    std::cout << std::endl;

    // arithmetic operators
    std::cout << "Arithmetic Operators (a, b)" << std::endl;
    std::cout << "---------- a = " << a << " --- b = " << b << " ----------" << std::endl;
    std::cout << "+ : " << a + b << std::endl;
    std::cout << "- : " << a - b << std::endl;
    std::cout << "* : " << a * b << std::endl;
    std::cout << "/ : " << a / b << std::endl;
    std::cout << std::endl;

    // pre-increment and post-increment
    std::cout << "Pre-increment & Post-increment (a)" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "++a " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "----------" << std::endl;
    a = 1;
    std::cout << "a = " << a << std::endl;
    std::cout << "--a " << --a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a-- " << a-- << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << std::endl;

    // pre-decrement and post-decrement

    // min and max functions
    std::cout << "min() and max() functions" << std::endl;
    std::cout << "---------- a = " << a << " --- b = " << b << " ----------" << std::endl;
    std::cout << "max: " << Fixed::max(a, a) << std::endl;
    std::cout << "min: " << Fixed::min(a, a) << std::endl;
    std::cout << std::endl;

    return 0;
}
