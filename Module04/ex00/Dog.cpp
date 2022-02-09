#include "./Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    cout << "Constructors Dog called" << endl;
}
Dog::~Dog(){
    cout << "Destructors Dog called" << endl;
}
Dog::Dog(const Dog &copy){
    *this = copy;
}
Dog &Dog::operator=(const Dog &rhs){
    this->type = rhs.type;
    return *this;
}