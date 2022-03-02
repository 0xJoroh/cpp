#pragma once

#include <string>
#include <iostream>

#define cout std::cout
#define endl std::endl

typedef struct s_data
{
    int a;
    char b;
    bool c;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);