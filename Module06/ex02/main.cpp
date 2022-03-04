#include "./Base.hpp"
#include "./B.hpp"
#include "./A.hpp"
#include "./C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int n = std::rand() % 3;
    switch (n)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    }
    return NULL;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        cout << "A" << endl;
    else if (dynamic_cast<B *>(p))
        cout << "B" << endl;
    else if (dynamic_cast<C *>(p))
        cout << "C" << endl;
    else
        cout << "Unknown" << endl;
}

void identify(Base &p)
{
    try
    {
        identify(&p);
    }
    catch (std::bad_cast &e)
    {
        cout << "bad_cast" << endl;
    }
}

int main(void)
{
    Base *b = generate();
    identify(b);
    identify(*b);

    delete b;
    return 0;
}
