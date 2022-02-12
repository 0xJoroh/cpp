#include "./Cat.hpp"
#include "./Dog.hpp"

int main(void) {
    int i = 0;
    const Animal* array[10];
    for (; i < 5; i++)
        array[i] = new Cat();
    for (; i < 10; i++)
        array[i] = new Dog();
    for (i = 0;i<10;i++)
        delete array[i];
    return 0;
}
