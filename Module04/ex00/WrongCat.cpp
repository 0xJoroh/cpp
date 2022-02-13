#include "./WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    cout << "Constructors WrongCat called" << endl;
}
WrongCat::~WrongCat()
{
    cout << "Destructors WrongCat called" << endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound() const
{
    cout << "(WrongCat) object Sound!" << endl;
}