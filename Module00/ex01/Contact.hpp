#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define string std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define getline(a,c) std::getline(a,c)

class Contact
{
private:
	static string _fields[5];
	string _values[5];
	// string _lastName;
	// string _nickName;
	// string _phoneNumber;
	// string _darkestSecret;

public:
	Contact();
	~Contact();
	void setField(int index);
	void getFields();
};

#endif
