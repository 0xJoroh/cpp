#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"

int main(void) {
    const WrongAnimal* wrongCat = new WrongCat();
    const Animal* base = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    cout << base->getType() << endl;
    cout << j->getType() << endl;
    cout << i->getType() << endl;
    j->makeSound();
    i->makeSound();
    base->makeSound();
    cout << "wrongCat->makeSound() = ";
    wrongCat->makeSound();

    delete base;
    delete j;
    delete i;
}