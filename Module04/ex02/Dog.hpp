#ifndef _Dog_H_
#define _Dog_H_

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;

public:
    Dog();
    virtual ~Dog();

    Dog(const Dog &copy);
    Dog &operator=(const Dog &rhs);

    virtual void makeSound() const;
    void setIdea(string idea);
    void showIdeas();
    void resetIdeas();
};

#endif