#include "./Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->_brain = new Brain();
    cout << "Constructors Cat called" << endl;
}
Cat::~Cat()
{
    delete this->_brain;
    cout << "Destructors Cat called" << endl;
}
Cat::Cat(const Cat &copy)
{
    *this = copy;
}
Cat &Cat::operator=(const Cat &rhs)
{
    this->type = rhs.type;
    this->_brain = new Brain(*rhs._brain);
    return *this;
}

void Cat::makeSound() const
{
    cout << "Cat Sound!" << endl;
}

void Cat::setIdea(string idea)
{
    this->_brain->setIdea(idea);
}

void Cat::showIdeas()
{
    this->_brain->showIdeas();
}

void Cat::resetIdeas()
{
    this->_brain->resetIdeas();
}