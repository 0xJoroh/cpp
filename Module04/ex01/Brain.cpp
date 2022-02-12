#include "./Brain.hpp"

Brain::Brain(){
    cout << "Constructors Brain called" << endl;
}
Brain::~Brain(){
    cout << "Destructors Brain called" << endl;
}
Brain::Brain(const Brain &copy){
    *this = copy;
}
Brain &Brain::operator=(const Brain &rhs){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}