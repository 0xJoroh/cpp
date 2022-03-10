#pragma once

#include <iostream>
#include <exception>
#include <string>
#include <stack>

#define string std::string
#define cout std::cout
#define endl std::endl
#define cerr std::cerr

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(const MutantStack &copy)
    {
        std::stack<T>::operator=(copy);
    }
    MutantStack &operator=(const MutantStack &copy)
    {
        std::stack<T>::operator=(copy);
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};