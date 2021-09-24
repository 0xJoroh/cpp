#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(int index)
{
	this->index = index;
	std::cout << "First Name: ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, this->lastName);
	std::cout << "NickName: ";
	std::getline(std::cin, this->nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkestSecret);
}

void PhoneBook::search()
{
	if (!this->index)
		return;
	std::cout << std::setw(10) << this->index << "|";
	std::string output;

	output = this->firstName.substr(0, 9) + ((int)this->firstName.length() > 9 ? "." : "");
	std::cout << std::setw(10) << output << "|";

	output = this->lastName.substr(0, 9) + ((int)this->lastName.length() > 9 ? "." : "");
	std::cout << std::setw(10) << output << "|";

	output = this->nickName.substr(0, 9) + ((int)this->nickName.length() > 9 ? "." : "");
	std::cout << std::setw(10) << output;
	std::cout << std::endl;
}
void PhoneBook::showDetails()
{
	if (!this->index)
		return;
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
}


