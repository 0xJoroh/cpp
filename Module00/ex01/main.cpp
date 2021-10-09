#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	string command;

	while (1)
	{
		cout << "Command: ";
		getline(cin, command);

		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
			phoneBook.search();
		if (command == "EXIT")
			break;
	}
	return 0;
}
