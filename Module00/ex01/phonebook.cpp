#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	Contact cont;

	// if (_index == 8)
	// 		_index = 0;
	for (int i = 0; i < FIELDS_NUM; i++)
		cont.setField(i); 
	this->getContact(0).getFields();
	this->_index++;
}

void PhoneBook::showColumns()
{
	cout << std::setw(10) << "Index"
		 << "|";
	cout << std::setw(10) << "First Name"
		 << "|";
	cout << std::setw(10) << "Last Name"
		 << "|";
	cout << std::setw(10) << "NickName";
	cout << endl;
}

void PhoneBook::search()
{
	// this->showColumns();
	// cout << _index;

	// for (int i = 0; i <= this->_index; i++)
	// {
	// 	cout << "index: [" << this->_index << "]" << endl;
	// }
	this->getContact(0).getFields();

	// if (!this->index)
	// return;
	// cout << std::setw(10) << this->index << "|";
	// string output;

	// output = firstName.substr(0, 9) + ((int)firstName.length() > 9 ? "." : "");
	// cout << std::setw(10) << output << "|";

	// output = lastName.substr(0, 9) + ((int)lastName.length() > 9 ? "." : "");
	// cout << std::setw(10) << output << "|";

	// output = nickName.substr(0, 9) + ((int)nickName.length() > 9 ? "." : "");
	// cout << std::setw(10) << output;
	// cout << endl;
}

void PhoneBook::showDetails()
{
	// if (!this->index)
	// 	return;
	// cout << this->firstName << endl;
	// cout << this->lastName << endl;
	// cout << this->nickName << endl;
	// cout << this->phoneNumber << endl;
	// cout << this->darkestSecret << endl;
}

Contact PhoneBook::getContact(int index)
{
	return this->_contacts[index];
}
