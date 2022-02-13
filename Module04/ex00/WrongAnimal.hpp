#ifndef _WRONG_ANIMAL_H_
#define _WRONG_ANIMAL_H_

#include <string>
#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class WrongAnimal{
protected:
    string type;
public:
    WrongAnimal();
    WrongAnimal(string type);
    ~WrongAnimal();

    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &rhs);

    string getType(void) const;
    void makeSound() const;
};

#endif