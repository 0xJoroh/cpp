#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setContact(int index)
{
	cout << this->_fields[index] << ": ";
	getline(cin, this->_values[index]);
}

void Contact::getFields(int index)
{
	string output;
	cout << std::setw(10) << index + 1 << "|";
	for (int i = 0 ; i < 3 ; i++)
	{
		output = this->_values[i].substr(0, 9) + ((int)this->_values[i].length() > 9 ? "." : "");
		cout << std::setw(10) << output << "|";
	}
	cout << endl;
}

void Contact::getDetails()
{
	for (int i = 0 ; i < 5 ; i++)
		cout << this->_values[i] << endl;
}

bool Contact::checkFields()
{
	int empty = 0;
	for (int i = 0; i < 5; i++)
		if (this->_values[i].empty())
			empty++;
	return empty != 5;
}

string Contact::_fields[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
