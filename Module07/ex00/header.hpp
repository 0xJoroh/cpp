#pragma once

#include <iostream>
#include <string>

#define cout std::cout
#define endl std::endl
#define string std::string

template <typename T>
T max(T a, T b)
{
    if (a == b)
        return b;
    return ( a > b ? a : b);
}

template <typename T>
T min(T a, T b)
{
    if (a == b)
        return b;
    return (a > b ? b : a);
}

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
