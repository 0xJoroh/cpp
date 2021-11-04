#include "./Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
