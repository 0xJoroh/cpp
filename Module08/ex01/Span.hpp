#pragma once

#include <iostream>
#include <exception>

#define string std::string
#define cout std::cout
#define endl std::endl

class Span{
    private:
        unsigned int _size;
        int *_tab;
    public:
        Span(unsigned int size);
        ~Span();
        Span(Span & const copy);
        Span & operator=(Span & const copy);
        void addNumber(int nb);
        int shortestSpan() const;
        int longestSpan() const;

        class SpanException : public std::exception{
            public:
                virtual const char * what() const throw();
        };
};