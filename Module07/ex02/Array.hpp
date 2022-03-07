#pragma once

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(Array const &copy);
    Array &operator=(Array const &src);
    T &operator[](unsigned int i) const;
    unsigned int size() const;

    class BadAccess : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < n; i++)
        this->_array[i] = 0;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &src)
{
    this->_size = src.size();
    this->_array = new T[src.size()];
    for (unsigned int i = 0; i < src.size(); i++)
        this->_array[i] = src[i];
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i < 0 || i >= this->_size)
        throw Array<T>::BadAccess();
    return this->_array[i];
}

template <typename T>
const char *Array<T>::BadAccess::what() const throw()
{
    return "Bad access";
}