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

// Copy constructor
Fixed::Fixed(Fixed const &src)
{
    cout << "Copy constructor called" << endl;
    *this = src;
}

std::ostream &operator<<(std::ostream os, const Fixed &rhs)
{
    cout << "operator << output called" << endl;
    cout << rhs.getRawBits();
}

//ex01
Fixed::Fixed(const int nbr){
    // int to fixed
    cout << "Int constructor called" << endl;
    this->_value = nbr;
}

Fixed::Fixed(const float nbr){
    // float to fixed
    cout << "Float constructor called" << endl;
    // return (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));

}

float Fixed::toFloat( void ) const{
    // fixed to float
    return (float)(this->_value * (1 << this->_bits));
}

int Fixed::toInt( void ) const{
    // fixed to int
    return (int)(round(this->_value * (1 << this->_bits)));
}