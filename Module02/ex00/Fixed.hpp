#ifndef __Fixed_H__
#define __Fixed_H__

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Fixed
{
private:
    int _value;
    static const int _bits;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    // Assignment Operators Overloading
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
