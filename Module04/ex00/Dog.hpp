#ifndef _Dog_H_
#define _Dog_H_

#include "./Animal.hpp"

class Dog: public Animal{
public:
    Dog();
    ~Dog();

    Dog(const Dog &copy);
    Dog &operator=(const Dog &rhs);
    
    void makeSound() const;
};

#endif