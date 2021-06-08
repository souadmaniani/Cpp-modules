#include "phoneBook.hpp"

int is_number(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	PhoneBook pb;
	std::string command;
	std::string str;
	int index;

	command = "";
	std::cout << "My awesome PhoneBook" << "\n";
	while(command.compare("EXIT") != 0)
	{
		std::cout << "Enter ADD, SEARCH or EXIT command: " << "\n";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			if (pb.getCount() < 8)
			{
				Contact c;
				c.createContact();
				pb.addContact(pb.getCount(), c);
			}
			else
				std::cout << "\033[1;31myour phonebook storage is full!\033[0m" << "\n";
		}
		else if(command.compare("SEARCH") == 0)
		{
			pb.displayAll();
			if (pb.getCount() != 0)
			{
				std::cout << "Enter index to get a contact's info: " << "\n";
				index = -1;
				while(!(index >= 0 and index < pb.getCount()))
				{
					std::getline(std::cin, str);
					if (is_number(str))
						index = std::stoi(str);
					if (index >=0 && index < pb.getCount())
						pb.getContact( std::stoi(str)).displayContact();
					else
						std::cout << "\033[1;31mindex not valid rewrite index!!\033[0m" << "\n";
				}
			}
		}
	}
	return (0);
}
