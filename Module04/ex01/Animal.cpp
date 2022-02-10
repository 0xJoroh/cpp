#include "./Animal.hpp"

Animal::Animal(){
    this->type = "";
    cout << "Constructors Animal called" << endl;
}
Animal::Animal(string type){
    this->type = type;
    cout << "Constructors Animal called" << endl;
}
Animal::~Animal(){
    cout << "Destructors Animal called" << endl;
}
Animal::Animal(const Animal &copy){
    *this = copy;
}
Animal &Animal::operator=(const Animal &rhs){
    this->type = rhs.type;
    return *this;
}

string Animal::getType(void) const{
    return this->type;
}

void Animal::makeSound() const{
    cout << "Animal Sound!" << endl;
}