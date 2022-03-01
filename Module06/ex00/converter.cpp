#include "./converter.hpp"

Converter::Converter()
{
}
Converter::Converter(Converter const &src)
{
    *this = src;
}

Converter::Converter(string str)
{
    this->_value = str;
}
Converter::~Converter()
{
}

Converter &Converter::operator=(Converter const &rhs)
{
    this->_value = rhs._value;
    return *this;
}

Converter::operator int() const
{
    cout << "int: \t";
    try
    {
        int i = std::stoi(this->_value);
        cout << i << endl;
        return i;
    }
    catch (const std::exception &e)
    {
        cerr << "Impossible" << endl;
    }
    return 0;
}
Converter::operator float() const
{
    cout << "float: \t";
    try
    {
        float f = std::stof(this->_value);
        if (f != static_cast<int>(f))
            cout << f << "f" << endl;
        else
            cout << f << ".0f" << endl;
        return f;
    }
    catch (const std::exception &e)
    {
        cerr << "Impossible" << endl;
    }
    return 0;
}
Converter::operator double() const
{
    cout << "double: ";
    try
    {
        double d = std::stod(this->_value);
        if (d != static_cast<int>(d))
            cout << d << endl;
        else
            cout << d << ".0" << endl;
        return d;
    }
    catch (const std::exception &e)
    {
        cerr << "Impossible" << endl;
    }
    return 0;
}
Converter::operator char() const
{
    cout << "char: \t";
    try
    {
        char i = std::stoi(this->_value);
        if (isprint(i))
        {
            cout << "'" << i << "'" << endl;
            return i;
        }
        else
            throw "Non displayable";
    }
    catch (const std::exception &e)
    {
        cerr << "Impossible" << endl;
    }
    catch (const char *e)
    {
        cerr << e << endl;
    }
    return 0;
}
