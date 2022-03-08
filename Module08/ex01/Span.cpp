#include "Span.hpp"

const char *Span::SpanException()::what() const throw()
{
    return "SpanException";
}

Span::Span(unsigned int size): _size(size), _tab(new int[size])
{
    if (size == 0)
        throw SpanException();
}

Span::~Span()
{
    delete[] _tab;
}

Span::Span(Span & const copy)
{
    *this = copy;
}

Span &Span::operator=(Span & const copy)
{
    if (this != &copy)
    {
        _size = copy._size;
        _tab = new int[copy._size];
        for (int i = 0; i < _size; i++)
            _tab[i] = copy._tab[i];
    }
    return *this;
}

void Span::addNumber(int nb)
{

}

int Span::shortestSpan() const
{

}

int Span::longestSpan() const
{

}
