#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    static string _levels[4];

public:
    Karen();
    ~Karen();
    void complain(string level);
    int getLevel(string level);
};

#endif
