#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setField(int index){
	cout << _fields[index] << ": ";
	getline(cin, _values[index]);
}

string Contact::getField(int index){
	return _values[index];
}

string Contact::_fields[5] = {"firstName", "lastName", "nickName", "phoneNumber", "darkestSecret"};
