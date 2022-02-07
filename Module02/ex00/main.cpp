#include "./Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    cout << a.getRawBits() << endl;
    cout << b.getRawBits() << endl;
    cout << c.getRawBits() << endl;

    // a.setRawBits(7);
    // cout << a.getRawBits() << endl;

    return 0;
}
