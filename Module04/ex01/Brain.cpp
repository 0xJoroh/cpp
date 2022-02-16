#include "./Brain.hpp"

Brain::Brain()
{
    // initialize ideas
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
    cout << "Constructors Brain called" << endl;
}
Brain::~Brain()
{
    cout << "Destructors Brain called" << endl;
}
Brain::Brain(const Brain &copy)
{
    *this = copy;
}
Brain &Brain::operator=(const Brain &rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

// set an idea
void Brain::setIdea(string idea)
{
    for (int i = 0; i < 100; i++)
        if (this->ideas[i] == "")
        {
            this->ideas[i] = idea;
            break;
        }
}

// Show all ideas
void Brain::showIdeas()
{
    for (int i = 0; i < 100; i++)
        if (this->ideas[i] != "")
            cout << this->ideas[i] << endl;
}

// reset ideas
void Brain::resetIdeas()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
}