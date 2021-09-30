#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CONTACT_NUM 8
#define FIELDS_NUM 5

#include "Contact.hpp"
class PhoneBook
{
private:
	Contact _contacts[CONTACT_NUM];
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
