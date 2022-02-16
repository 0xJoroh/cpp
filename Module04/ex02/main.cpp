#include "./Cat.hpp"
#include "./Dog.hpp"

int test(void)
{
    int i = 0;
    const Animal *array[6];
    for (; i < 3; i++)
        array[i] = new Cat();
    for (; i < 6; i++)
        array[i] = new Dog();
    for (i = 0; i < 6; i++)
        delete array[i];

    // Shallow Copy & Deep Copy test
    Dog d;
    cout << endl;
    d.setIdea("Dog1 like to eat");
    d.setIdea("Dog1 like to sleep");
    d.setIdea("Dog1 like to play");
    cout << endl;
    {
        Dog c = d;
        c.setIdea("Dog2 like to eat");
        c.setIdea("Dog2 like to sleep");
        c.setIdea("Dog2 like to play");
        cout << "_____" << endl;
        c.showIdeas();
        d.resetIdeas();
        cout << "_____" << endl;
        c.showIdeas();
        cout << "_____" << endl;
        cout << endl;
    }
    return 0;
}

int main(void)
{
    test();
    // system("leaks Animal_A");
    return 0;
}
