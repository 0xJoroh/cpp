#include "./Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

// Assignment operator overload
Fixed &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

// Copy constructor
Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

//ex01
std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
    os << rhs.toFloat();
    return os;
}

Fixed::Fixed(const int nbr)
{
    // int to fixed
    this->_value = nbr * (1 << this->_bits);
}

Fixed::Fixed(const float nbr)
{
    // float to fixed
    this->_value = roundf(nbr * (1 << this->_bits));
}

float Fixed::toFloat(void) const
{
    // fixed to float
    return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
    // fixed to int
    return (roundf(this->_value / (1 << this->_bits)));
}

//ex02
bool Fixed::operator>(const Fixed &fixed) const
{
    return this->_value > fixed.getRawBits();
}
bool Fixed::operator<(const Fixed &fixed) const
{
    return this->_value < fixed.getRawBits();
}
bool Fixed::operator>=(const Fixed &fixed) const
{
    return this->_value >= fixed.getRawBits();
}
bool Fixed::operator<=(const Fixed &fixed) const
{
    return this->_value <= fixed.getRawBits();
}
bool Fixed::operator==(const Fixed &fixed) const
{
    return this->_value == fixed.getRawBits();
}
bool Fixed::operator!=(const Fixed &fixed) const
{
    return this->_value != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}
Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}
Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
    ++this->_value;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++(*this);
    return tmp;
}
Fixed &Fixed::operator--()
{
    --this->_value;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --(*this);
    return tmp;
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
    return left.getRawBits() < right.getRawBits() ? left : right;
}
const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
    return left.getRawBits() > right.getRawBits() ? left : right;
}