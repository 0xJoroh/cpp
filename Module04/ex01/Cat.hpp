#ifndef _Cat_H_
#define _Cat_H_

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;

public:
    Cat();
    virtual ~Cat();

    Cat(const Cat &copy);
    Cat &operator=(const Cat &rhs);

    virtual void makeSound() const;
    void setIdea(string idea);
    void showIdeas();
    void resetIdeas();
};

#endif