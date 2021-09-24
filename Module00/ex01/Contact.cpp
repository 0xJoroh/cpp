#include "Contact.hpp"

Contact::Contact()
{
	this->index = 0;
}

Contact::~Contact()
{
}

void Contact::setFields(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret){
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}
