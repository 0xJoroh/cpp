#include "Span.hpp"

Span::Span(): _size(0)
{
}

Span::Span(unsigned int size): _size(size)
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->_size = copy._size;
        for (int i = 0; i < (int)copy._tab.size(); i++)
            this->_tab.push_back(copy._tab[i]);
    }
    return *this;
}

void Span::addNumber(unsigned int nb)
{
    try{
        if (this->_tab.size() == this->_size)
            throw SpanException();
        this->_tab.push_back(nb);
    }
    catch(std::exception &e)
    {
        cerr << e.what() << endl;
    }
}

unsigned int Span::shortestSpan()
{
    if (this->_tab.size() <= 1)
        throw  SpanException();
    std::sort(this->_tab.begin(), this->_tab.end(), std::greater<unsigned int>());
    unsigned int ret = this->_tab[0] - this->_tab[1];
    unsigned int checker;
    for (int i = 0; i < (int)this->_size; i++)
    {
        checker = this->_tab[i] - this->_tab[i + 1];
        if (0 <= checker && checker < ret)
            ret = checker;
    }
    return ret;
}

unsigned int Span::longestSpan()
{
    if (this->_tab.size() <= 1)
        throw SpanException();
    return (*std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end()));
}

const char *Span::SpanException::what() const throw()
{
    return "Span Exception";
}

void Span::showValues() const
{
    for (int i = 0; i < (int)this->_tab.size(); i++)
        cout << this->_tab[i] << endl;
}

void Span::addNumber(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end)
{
    try{
        if (std::distance(start, end) + this->_tab.size() > this->_size)
            throw SpanException();
        this->_tab.insert(this->_tab.end(), start, end);
    }catch(std::exception &e)
    {
        cerr << e.what() << endl;
        exit(-1);
    }
}