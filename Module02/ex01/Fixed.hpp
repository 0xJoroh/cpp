#ifndef __Fixed_H__
#define __Fixed_H__

#include <iostream>
#include <cmath>

#define string std::string

class Fixed
{
private:
    int _value;
    static const int _bits = 8;

public:
    //ex00
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    // Assignment Operators Overloading
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);

    //ex01
    Fixed(const int nbr);
    Fixed(const float nbr);
    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &rhs);

#endif