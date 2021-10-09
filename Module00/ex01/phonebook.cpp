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
	Contact tmp;
	if (this->_index == 8)
		this->_index = 0;
	for (int i = 0; i < FIELDS_NUM; i++)
		tmp.setContact(i);
	if (tmp.checkFields())
	{
		this->_contacts[this->_index] = tmp;
		this->_index++;
		if (this->_count < 8)
			this->_count++;
	}
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
	this->showDetails();
}

void PhoneBook::showDetails()
{
	int	index = getContactIndex();
	if (index)	
		this->_contacts[index - 1].getDetails();
}

bool PhoneBook::isValidIndex(string index)
{
	for (int i = 0; i < (int)index.length(); i++)
		if (index[i] < 48 || index[i] > 57)
			return false;
	return true;
}

int PhoneBook::getContactIndex()
{
	int index;
	string input;
	while (1)
	{
		cout << "Index: ";
		getline(cin, input);
		if (input.empty())
			return 0;
		if (!isValidIndex(input))
		{
			cout << "Enter a valid index." << endl;
			continue;
		}
		index = std::stoi(input);
		if (index > 0 && index <= this->_count)
			return index;
		cout << "This index does not exist." << endl;
	}
}
