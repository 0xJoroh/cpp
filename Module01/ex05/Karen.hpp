#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <string>
#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

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
