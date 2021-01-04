#include <iostream>
#include <iomanip>
#include "person.hpp"

int main()
{
	int				amount = 0;
	int				tmp = 0;
	Person			ph_book[8];
	std::string 	command;

	std::cout << "Welcome to Phonebook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "Your command: ";
		std::cin >> command;
		if ("ADD" == command)
		{
			if (amount < 8)
			{
				// std::cout << "Your amount is " << amount << std::endl;
				ph_book[amount].add_person(amount);
				amount++;
			}
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if ("SEARCH" == command)
		{
			if (amount > 0)
			{
				std::cout << "|-------------------------------------------|" << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				std::cout << "|-------------------------------------------|" << std::endl;
				tmp = 0;
				while (tmp < amount)
				{
					ph_book[tmp].search_short();
					tmp++;
				}
				std::cout << "Enter id: ";
				std::cin >> tmp;
				// std::cout << "Your id is " << tmp << std::endl;
			}
			else
				std::cout << "Phonebook is empty" << std::endl;
		}
		else if ("EXIT" == command)
			return (0);
		else
			std::cout << "There is no such command" << std::endl;
	}
	return (0);
}
