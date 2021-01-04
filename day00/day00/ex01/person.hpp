#ifndef PERSON_HPP
# define PERSON_HPP

#include <iostream>
#include <iomanip>

class Person {
private:
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
	void add_person		(void);
	void search_short	(void);
	void search_full	(void);
};


// class Contact {
// private:
// 	std::string first_name;
// 	std::string last_name;
// 	std::string nickname;
// 	std::string login;
// 	std::string postal_address;
// 	std::string email_address;
// 	std::string phone_number;
// 	std::string birthday_date;
// 	std::string favorite_meal;
// 	std::string underwear_color;
// 	std::string darkest_secret;
// public:
	
// 	void set_fname () {
// 		// first_name = str;
// 		std::cout << first_name << '\n';
// 		// std::cout << "Hi" << '\n';
// 	}
// 	// ~Contacts () {
// 	// 	std::cout << "By" << '\n';
// 	// }
// };

#endif
