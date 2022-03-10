#include "Span.hpp"

void fonction()
{
    Span sp = Span(10);
    sp.addNumber(9);
    sp.addNumber(17);
    sp.addNumber(3);
    sp.addNumber(12);
    sp.addNumber(6);
    sp.addNumber(11);

    sp.showValues();
    cout << "----------" << endl;

    try{
        cout << "Shortest span: [" << sp.shortestSpan() << "]" << endl;
        cout << "Shortest span: [" << sp.longestSpan() << "]" << endl;
    }catch(Span::SpanException &e){
        cerr << e.what() << endl;
    }

    std::vector<unsigned int> v;
    v.push_back(91);
    v.push_back(19);
    v.push_back(13);
    v.push_back(14);
    // v.push_back(15);

    std::vector<unsigned int>::iterator begin = v.begin();
    std::vector<unsigned int>::iterator end = v.end();
    sp.addNumber(begin, end);

    sp.showValues();

    try{
        cout << "Shortest span: [" << sp.shortestSpan() << "]" << endl;
        cout << "Shortest span: [" << sp.longestSpan() << "]" << endl;
    }catch(Span::SpanException &e){
        cerr << e.what() << endl;
    }
}

int main()
{
    fonction();
    // system("leaks span");
    return 0;
}
