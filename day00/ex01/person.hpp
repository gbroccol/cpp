#ifndef PERSON_HPP
# define PERSON_HPP

#include <iostream> // std
#include <iomanip> // ?

class Person {
private:
	int			id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
public:
	Person				(void); // constuctor
	~Person				(void); // destructor
	void add_person		(int id);
	void search_short	(void);
	void search_full	(void);
};

#endif
