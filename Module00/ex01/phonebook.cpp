#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	Contact cont;

	// if (_index == 8)
	// 		_index = 0;
	for (int i = 0; i < 5; i++)
		cont.setField(i);
	_index++;
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
	cout << std::endl;
}

void PhoneBook::search()
{
	this->showColumns();
	// cout << _index;
	Contact tmp;
	for (int i = 0; i < _index; i++)
	{
		// cout << "[" << i << "]" << std::endl;
		tmp = this->getContact(_index);
		cout << tmp.getField(i) << std::endl;
	}

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
	// cout << std::endl;
}

void PhoneBook::showDetails()
{
	// if (!this->index)
	// 	return;
	// cout << this->firstName << std::endl;
	// cout << this->lastName << std::endl;
	// cout << this->nickName << std::endl;
	// cout << this->phoneNumber << std::endl;
	// cout << this->darkestSecret << std::endl;
}

Contact PhoneBook::getContact(int index)
{
	return this->_contacts[index];
}
