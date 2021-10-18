#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
    cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void Karen::info(void)
{
    cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void Karen::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
}

void Karen::error(void)
{
    cout << "This is unacceptable, I want to speak to the manager now." << endl;
}

void Karen::complain(string level)
{
    string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*f[i])();
}