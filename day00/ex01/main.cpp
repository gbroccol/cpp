#include <iostream>
#include <iomanip>
#include "person.hpp"

int main()
{
	int				amount = 0;
	int				tmp = 0;
	Person			ph_book[8];
	std::string 	command;

	// \x1b[31mTest\x1b[0m
	// \x1b[37;43mTest\x1b[0m

	std::cout << "\x1b[1;33mWelcome to Phonebook!\x1b[0m" << std::endl;
	std::cout << "\x1b[1;33mAvailable commands: ADD, SEARCH, EXIT\x1b[0m" << std::endl;
	while (1)
	{
		// \x1b[4;35mTest\x1b[0m
		std::cout << "\x1b[1;34mYour command: \x1b[0m";
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
				std::cout << "\x1b[1;31mPhonebook is full\x1b[0m" << std::endl;
		}
		else if ("SEARCH" == command)
		{
			if (amount > 0)
			{
				std::cout << "\x1b[32m|-------------------------------------------|\x1b[0m" << std::endl;
				std::cout << "\x1b[32m|     Index|First Name| Last Name|  Nickname|\x1b[0m" << std::endl;
				std::cout << "\x1b[32m|-------------------------------------------|\x1b[0m" << std::endl;
				tmp = 0;
				while (tmp < amount)
				{
					ph_book[tmp].search_short();
					tmp++;
				}
				tmp = 1;
				do
				{
					if (tmp <= 0 || tmp > amount)
						std::cout << "\x1b[1;31mWrong index\x1b[0m" << std::endl;
					std::cin.clear();
    				std::cin.ignore(256,'\n');
					std::cout << "\x1b[1;34mEnter id: \x1b[0m";
					std::cin >> tmp;

					// std::cout << tmp << "<<<-----------------------";

				} while (tmp <= 0 || tmp > amount || std::cin.fail());
				
				// while (tmp <= 0 || tmp > amount)
				// {
				// 	std::cout << "\x1b[1;31mWrong ID\x1b[0m" << std::endl;
				// 	std::cout << "Enter id: ";
				// 	std::cin >> tmp;
				// 	std::cin >> tmp;
				// }

				ph_book[tmp - 1].search_full();
				
				// if (tmp <= 0 || tmp > amount)
				// 	std::cout << "\x1b[1;31mWrong ID\x1b[0m" << std::endl;
				// else
				// 	ph_book[tmp - 1].search_full();
				// return (0);
			}
			else
				std::cout << "\x1b[1;31mPhonebook is empty\x1b[0m" << std::endl;
		}
		else if ("EXIT" == command)
			return (0);
		else
			std::cout << "\x1b[1;31mThere is no such command\x1b[0m" << std::endl;
	}
	return (0);
}
