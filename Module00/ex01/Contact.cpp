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

void Contact::getFields(){
	cout << "[" <<this->_values[0] << "]" << endl;
}

string Contact::_fields[5] = {"firstName", "lastName", "nickName", "phoneNumber", "darkestSecret"};
