#include <iostream>
#include <iomanip>

class Contact
{
private:
	int index;
	std::string firstName;
	std::string lastName;
	std::string nakeName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact()
	{
		this->index = 0;
	}
	void add(int index)
	{
		this->index = index;
		std::cout << "First Name: ";
		std::getline(std::cin, this->firstName);
		std::cout << "Last Name: ";
		std::getline(std::cin, this->lastName);
		std::cout << "NakeName: ";
		std::getline(std::cin, this->nakeName);
		std::cout << "Phone Number: ";
		std::getline(std::cin, this->phoneNumber);
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->darkestSecret);
	}

	void search()
	{
		if (!this->index)
			return;
		std::cout << std::setw(10) << this->index << "|";
		std::string output;

		output = this->firstName.substr(0, 9) + ((int)this->firstName.length() > 9 ? "." : "");
		std::cout << std::setw(10) << output << "|";

		output = this->lastName.substr(0, 9) + ((int)this->lastName.length() > 9 ? "." : "");
		std::cout << std::setw(10) << output << "|";

		output = this->nakeName.substr(0, 9) + ((int)this->nakeName.length() > 9 ? "." : "");
		std::cout << std::setw(10) << output;
		std::cout << std::endl;
	}
	void showDetails()
	{
		if (!this->index)
			return;
		std::cout << this->firstName << std::endl;
		std::cout << this->lastName << std::endl;
		std::cout << this->nakeName << std::endl;
		std::cout << this->phoneNumber << std::endl;
		std::cout << this->darkestSecret << std::endl;
	}
};

void showColumns()
{
	std::cout << std::setw(10) << "Index"
			  << "|";
	std::cout << std::setw(10) << "First Name"
			  << "|";
	std::cout << std::setw(10) << "Last Name"
			  << "|";
	std::cout << std::setw(10) << "Nackname";
	std::cout << std::endl;
}
bool isValidIndex(std::string index)
{
	for (int i = 0; i < (int)index.length(); i++)
		if (index[i] < 48 || index[i] > 57)
			return false;
	return true;
}
int getContactIndex()
{
	int index;
	std::string input;
	while (1)
	{
		std::cout << "Index: ";
		std::getline(std::cin, input);
		if (!isValidIndex(input))
		{
			std::cout << "Enter a valid index." << std::endl;
			continue;
		}
		index = std::stoi(input);
		if (index > 0 && index <= 8)
			return index;
		std::cout << "This index does not exist." << std::endl;
	}
}

int main()
{
	Contact phoneBook[8];
	std::string command;
	int num = 0;

	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, command);

		if (!command.compare("ADD"))
		{
			if (num == 8)
				num = 0;
			phoneBook[num].add(num + 1);
			num++;
		}
		else if (!command.compare("SEARCH"))
		{
			showColumns();
			for (int i = 0; i < 8; i++)
				phoneBook[i].search();
			int index = getContactIndex();
			if (index > 0 && index <= 8)
				phoneBook[index - 1].showDetails();
		}
		else if (!command.compare("EXIT"))
			break;
	}
	return 0;
}
