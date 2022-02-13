#ifndef _Wrong_Cat_H_
#define _Wrong_Cat_H_

#include "./WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();

    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &rhs);

    void makeSound() const;
};

#endif