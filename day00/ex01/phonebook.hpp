#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream> // std
#include <iomanip>
#include "person.hpp"

class Phonebook {

private:
	std::string command;
	int amount;
	Person person[8];
	
public:
	Phonebook				(void); // constuctor
	~Phonebook				(void); // destructor
	void add_person			(void);
	void search_short		(void);
	void search_ip			(void);
};

#endif