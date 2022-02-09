#ifndef _Cat_H_
#define _Cat_H_

#include "./Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    ~Cat();

    Cat(const Cat &copy);
    Cat &operator=(const Cat &rhs);

    void makeSound() const;

};

#endif