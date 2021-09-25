#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CONTACTNUM 8

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[CONTACTNUM];
	int _index;

public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();
	Contact getContact(int index);
	void showColumns();
	void showDetails();
};

#endif
