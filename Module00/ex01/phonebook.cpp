#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	if (this->_index == 8)
			this->_index = 0;
	for (int i = 0; i < FIELDS_NUM; i++)
		this->_contacts[this->_index].setContact(i); 
	this->_index++;
	if(this->_count < 8)
		this->_count++;
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
	this->showColumns();

	for (int i = 0; i < this->_count; i++)
		this->_contacts[i].getFields(i);
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
