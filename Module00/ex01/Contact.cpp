#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setField(int index){
	cout << this->_fields[index] << ": ";
	getline(cin, this->_values[index]);
}

string Contact::getField(int index){
	return this->_values[index];
}

string Contact::_fields[5] = {"firstName", "lastName", "nickName", "phoneNumber", "darkestSecret"};
