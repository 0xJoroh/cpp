#include <string>
#include <iostream>

#define cout std::cout
#define string std::string
#define endl std::endl


int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << endl;
    cout << "string    address\t\t: \t" <<&str << endl;
    cout << "stringPTR address\t\t: \t" << stringPTR << endl;
    cout << "stringREF address\t\t: \t" << &stringREF << endl;
    cout << endl;
    cout << "string value using pointer\t: \t" << *stringPTR << endl;
    cout << "string value using reference\t: \t" << stringREF << endl;
    cout << endl;
    return 0;
}
