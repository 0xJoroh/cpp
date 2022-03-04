#include "./h.hpp"

template <class A>
A max (A a, A b) {
    if (a.getValue() == b.getValue())
        return b;
    return ( a.getValue() > b.getValue() ? a : b);
}
A min (A a, A b) {
    if (a.getValue() == b.getValue())
        return b;
    return (a.getValue() > b.getValue() ? b : a);
}
A swap (A a, A b) {
    A tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}