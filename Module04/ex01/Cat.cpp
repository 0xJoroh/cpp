#include "./Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    this->_brain = new Brain();
    cout << "Constructors Cat called" << endl;
}
Cat::~Cat(){
    delete this->_brain;
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