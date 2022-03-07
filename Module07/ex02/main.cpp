#include "./Array.hpp"

#define MAX_VAL 750

void lfoncsion()
{
    Array<int> a(10);

    std::cout << "a size: " << a.size() << std::endl;

    // Fill the Array
    for (int i = 0; i < 10; i++)
        a[i] = i;

    // Copy Constructor
    Array<int> b(a);
    std::cout << "b size: " << a.size() << std::endl;

    // Display a elements
    std::cout << "a:\t";
    for (int i = 0; i < 10; i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;

    // Display b elements
    std::cout << "b:\t";
    for (int i = 0; i < 10; i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;

    // Bad accessing
    try{
        std::cout << b[-2] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void dilhom()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
}

int main()
{
    lfoncsion();
    // dilhom();
    // system("leaks array");
    return 0;
}
