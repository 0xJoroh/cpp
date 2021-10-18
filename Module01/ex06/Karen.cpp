#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

string Karen::_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Karen::debug(void)
{
    cout << "[ DEBUG ]" << endl;
    cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
    cout << endl;
}

void Karen::info(void)
{
    cout << "[ INFO ]" << endl;
    cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
    cout << endl;
}

void Karen::warning(void)
{
    cout << "[ WARNING ]" << endl;
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
    cout << endl;
}

void Karen::error(void)
{
    cout << "[ ERROR ]" << endl;
    cout << "This is unacceptable, I want to speak to the manager now." << endl;
    cout << endl;
}

void Karen::complain(string level)
{
    void (Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int levelId = this->getLevel(level);
    if (levelId < 4)
        (this->*f[levelId])();
}

int Karen::getLevel(string level)
{
    for (int i = 0; i < 4; i++)
        if (level == this->_levels[i])
            return i;
    return 4;
}