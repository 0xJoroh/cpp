#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <string>
#include <algorithm>

#define string std::string
#define cout std::cout
#define endl std::endl
#define cerr std::cerr

class Span{
    private:
        unsigned int _size;
        std::vector<unsigned int> _tab;
    public:
        Span();
        Span(unsigned int size);
        ~Span();
        Span(const Span &copy);
        Span & operator=(const Span &copy);
        void showValues() const;
        void addNumber(unsigned int nb);
        void addNumber(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class SpanException : public std::exception{
            public:
                virtual const char * what() const throw();
        };
};