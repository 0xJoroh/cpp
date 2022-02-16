#ifndef _Brain_H_
#define _Brain_H_

#include "./Animal.hpp"

class Brain
{
private:
    string ideas[100];

public:
    Brain();
    ~Brain();

    Brain(const Brain &copy);
    Brain &operator=(const Brain &rhs);

    void setIdea(string idea);
    void showIdeas();

    void resetIdeas();
};

#endif