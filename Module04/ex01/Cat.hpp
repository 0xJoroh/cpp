#ifndef _Cat_H_
#define _Cat_H_

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat: public Animal{
private:
    Brain* _brain;
public:
    Cat();
    ~Cat();

    Cat(const Cat &copy);
    Cat &operator=(const Cat &rhs);

    void makeSound() const;
};

#endif