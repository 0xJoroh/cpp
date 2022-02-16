#include "./Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    cout << "Constructors Dog called" << endl;
}
Dog::~Dog()
{
    delete this->_brain;
    cout << "Destructors Dog called" << endl;
}
Dog::Dog(const Dog &copy)
{
    *this = copy;
}
Dog &Dog::operator=(const Dog &rhs)
{
    this->type = rhs.type;
    this->_brain = new Brain(*rhs._brain);
    return *this;
}

void Dog::makeSound() const
{
    cout << "Dog Sound!" << endl;
}

void Dog::setIdea(string idea)
{
    this->_brain->setIdea(idea);
}

void Dog::showIdeas()
{
    this->_brain->showIdeas();
}

void Dog::resetIdeas()
{
    this->_brain->resetIdeas();
}