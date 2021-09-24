#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define CONTACTNUM 8

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[CONTACTNUM];
	int index;

public:
	PhoneBook();
	~PhoneBook();
	void add(int index);
	void search();
	void showDetails();
};

#endif
