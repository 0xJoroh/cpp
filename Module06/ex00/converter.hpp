#pragma once

#include <iostream>
#include <string>

#define cout std::cout
#define cerr std::cerr
#define endl std::endl
#define string std::string

class Converter
{
private:
    string _value;

public:
    Converter();
    Converter(string str);
    ~Converter();
    Converter(Converter const &src);
    Converter &operator=(Converter const &rhs);

    // Conversion operators
    operator int() const;
    operator float() const;
    operator double() const;
    operator char() const;
};
