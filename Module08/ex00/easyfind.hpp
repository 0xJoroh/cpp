#pragma once

#include <iostream>
#include <string>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Element not found";
        } 
};

template <typename T>
void easyfind(T container, int element)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), element);
    if (iter == container.end())
        throw NotFoundException();
    else
        std::cout << "Element found at position: " << std::distance(container.begin(), iter) << std::endl;
}