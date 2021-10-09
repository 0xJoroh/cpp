#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CONTACT_NUM 8
#define FIELDS_NUM 5

#include "Contact.hpp"
class PhoneBook
{
private:
	Contact _contacts[CONTACT_NUM];
	int _index;	// Contact position
	int _count; // Contacts number

public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();
	Contact getContact(int index);
	void showColumns();
	void showDetails();
	bool isValidIndex(string index);
	int getContactIndex();
};

#endif
