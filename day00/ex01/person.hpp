#ifndef PERSON_HPP
# define PERSON_HPP

#include <iostream> 	// std
#include <iomanip> 		// std::setw

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
	int check_person	(void);
public:
	Person				(void); // constuctor
	~Person				(void); // destructor
	int add_person		(int id);
	void search			(void);
	void search_id		(void);
};

#endif
