#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T a[], int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(a[i]);
}

template< typename T >
void test( T const & x ) 
{ 
    std::cout << "number: " << x << std::endl; 
}
