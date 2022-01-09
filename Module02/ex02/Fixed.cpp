#include "./Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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
        std::cout << "Assignment operator called" << std::endl;
        this->_value = rhs.getRawBits();
    }
    return (*this);
}

// Copy constructor
Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


//ex01

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
    os << rhs.toFloat();
    return os;
}

Fixed::Fixed(const int nbr){
    // int to fixed
    std::cout << "Int constructor called" << std::endl;
    this->_value = nbr * (1 << this->_bits);
}

Fixed::Fixed(const float nbr){
    // float to fixed
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(nbr * (1 << this->_bits));
}

float Fixed::toFloat( void ) const{
    // fixed to float
    return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const{
    // fixed to int
    return (roundf(this->_value / (1 << this->_bits)));
}
