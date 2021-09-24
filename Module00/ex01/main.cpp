#include "PhoneBook.hpp"



void showColumns()
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

bool isValidIndex(string index)
{
	for (int i = 0; i < (int)index.length(); i++)
		if (index[i] < 48 || index[i] > 57)
			return false;
	return true;
}
int getContactIndex()
{
	int index;
	string input;
	while (1)
	{
		cout << "Index: ";
		getline(cin, input);
		if (!isValidIndex(input))
		{
			cout << "Enter a valid index." << std::endl;
			continue;
		}
		index = std::stoi(input);
		if (index > 0 && index <= 8)
			return index;
		cout << "This index does not exist." << std::endl;
	}
}

int main()
{
	PhoneBook phoneBook;

	string command;
	int num = 0;// Contact Index

	while (1)
	{
		cout << "Command: ";
		getline(cin, command);

		if (command == "ADD")
		{
			if (num == 8)
				num = 0;
			phoneBook[num].add(num + 1);
			num++;
		}
		// else if (command == "SEARCH")
		// {
		// 	showColumns();
		// 	for (int i = 0; i < 8; i++)
		// 		phoneBook[i].search();
		// 	int index = getContactIndex();
		// 	if (index > 0 && index <= 8)
		// 		phoneBook[index - 1].showDetails();
		// }
		else if (command == "EXIT")
			break;
	}
	return 0;
}
