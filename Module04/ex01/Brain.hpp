#ifndef _Brain_H_
#define _Brain_H_

class Brain{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();

    Brain(const Brain &copy);
    Brain &operator=(const Brain &rhs);
};

#endif