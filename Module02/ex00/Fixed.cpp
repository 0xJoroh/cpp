#include "./Fixed.hpp"

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    this->_value = 0;
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

// Copy constructor
Fixed::Fixed(Fixed const &src)
{
    cout << "Copy constructor called" << endl;
    this->_value = src.getRawBits();
}

// Assignment operator overload
Fixed &Fixed::operator = (Fixed const &rhs)
{
    if (this != &rhs)
    {
        cout << "Assignment operator called" << endl;
        this->_value = rhs.getRawBits();
    }
    return (*this);
}