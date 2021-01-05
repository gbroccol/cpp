#include "person.hpp"

void search(int amount, Person *ph_book)
{
	int tmp;
	
	if (amount > 0)
	{
		std::cout << "\x1b[32m|-------------------------------------------|\x1b[0m" << std::endl;
		std::cout << "\x1b[32m|     Index|First Name| Last Name|  Nickname|\x1b[0m" << std::endl;
		std::cout << "\x1b[32m|-------------------------------------------|\x1b[0m" << std::endl;
		tmp = 0;
		while (tmp < amount)
		{
			ph_book[tmp].search();
			tmp++;
		}
		std::cout << "\x1b[32m" << "|-------------------------------------------|" << "\x1b[0m" << std::endl;
		tmp = 1;
		do
		{
			if (tmp <= 0 || tmp > amount)
			{
				std::cout << "\x1b[31mWrong index. Try again\x1b[0m" << std::endl;
				std::cin.clear();
				std::cin.ignore(256,'\n');
			}
			std::cout << "\x1b[1;34mEnter id: \x1b[0m";
			std::cin >> tmp;
		} while (!std::cin.eof() && (tmp <= 0 || tmp > amount || std::cin.fail()));
		if (std::cin.eof())
			return ;
		ph_book[tmp - 1].search_id();
		std::cin.ignore(256,'\n');
	}
	else
		std::cout << "\x1b[31mPhonebook is empty\x1b[0m" << std::endl;
}

int main()
{
	int				amount = 0;
	Person			ph_book[8];
	std::string 	command;

	std::cout << "\x1b[1;33mWelcome to Phonebook!\x1b[0m" << std::endl;
	std::cout << "\x1b[1;33mAvailable commands: ADD, SEARCH, EXIT\x1b[0m" << std::endl;
	while (1)
	{
		std::cout << "\x1b[1;34mYour command: \x1b[0m";
		std::cin.clear();
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl << "\x1b[1;31mExit\x1b[0m" << std::endl;
			return (0);
		}
		if ("ADD" == command)
		{
			if (amount < 8)
				amount += ph_book[amount].add_person(amount);
			else
				std::cout << "\x1b[31mPhonebook is full\x1b[0m" << std::endl;
		}
		else if ("SEARCH" == command)
			search(amount, ph_book);
		else if ("EXIT" == command)
		{
			std::cout << "\x1b[1;31mPhonebook burned\x1b[0m" << std::endl;
			return (0);
		}
		else if (command.empty())
			continue ;
		else if (!std::cin.eof())
			std::cout << "\x1b[31mThere is no such command\x1b[0m" << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl << "\x1b[1;31mExit\x1b[0m" << std::endl;
			return (0);
		}
	}
	return (0);
}
