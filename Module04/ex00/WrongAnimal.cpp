#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    cout << "Constructor WrongAnimal called" << endl;
}
WrongAnimal::WrongAnimal(string type)
{
    this->type = type;
    cout << "Constructor WrongAnimal called" << endl;
}
WrongAnimal::~WrongAnimal()
{
    cout << "Destructors WrongAnimal called" << endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    this->type = rhs.type;
    return *this;
}

string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    cout << "WrongAnimal Sound!" << endl;
}