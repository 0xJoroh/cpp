#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define string std::string
#define cout std::cout
#define cin std::cin
#define getline(a,c) std::getline(a,c)

class Contact
{
private:
	string _firstName;
	string _lastName;
	string _nickName;
	string _phoneNumber;
	string _darkestSecret;
public:
	Contact();
	~Contact();
	void	setFields(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
};

#endif
