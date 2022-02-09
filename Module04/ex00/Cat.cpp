#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    cout << "Constructors Cat called" << endl;
}
Cat::~Cat(){
    cout << "Destructors Cat called" << endl;
}
Cat::Cat(const Cat &copy){
    *this = copy;
}
Cat &Cat::operator=(const Cat &rhs){
    this->type = rhs.type;
    return *this;
}

void Cat::makeSound() const{
    cout << "Cat Sound!" << endl;
}