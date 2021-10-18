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

public:
    Karen();
    ~Karen();
    void complain(string level);
};

#endif
