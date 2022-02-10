#ifndef _Animal_H_
#define _Animal_H_

#include <string>
#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Animal{
protected:
    string type;
public:
    Animal();
    Animal(string type);
    ~Animal();

    Animal(const Animal &copy);
    Animal &operator=(const Animal &rhs);

    string getType(void) const;
    void makeSound() const;
};

#endif