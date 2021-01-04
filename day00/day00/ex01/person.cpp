#include "person.hpp"

Person::Person (void) {
	std::cout << "Constructor\n";
	return ;
}

Person::~Person (void) {
	std::cout << "Destructor\n";
	return ;
}

void Person::add_person (void) {
	std::cout << "Add person\n";
	return ;
}

void Person::search_short (void) {
	std::cout << "search_short\n";
	return ;
}

void Person::search_full (void) {
	std::cout << "search_full\n";
	return ;
}


// Person::Person(): first_name("none"); last_name("none"); 
// {

// }

// Contact::Contact () {
// 	std::cout << "Enter your first name: ";
// 	std::cin >> first_name;
// 	std::cout << "Enter your last name: ";
// 	std::cin >> last_name;
// 	std::cout << "Enter your nickname: ";
// 	std::cin >> nickname;
// 	std::cout << "Enter your login: ";
// 	std::cin >> login;
// 	std::cout << "Enter your postal address: ";
// 	std::cin >> postal_address;
// 	std::cout << "Enter your email address: ";
// 	std::cin >> email_address;
// 	std::cout << "Enter your phone number: ";
// 	std::cin >> phone_number;
// 	std::cout << "Enter your birthday date: ";
// 	std::cin >> birthday_date;
// 	std::cout << "Enter your favorite meal: ";
// 	std::cin >> favorite_meal;
// 	std::cout << "Enter your underwear color: ";
// 	std::cin >> underwear_color;
// 	std::cout << "Enter your darkest secret: ";
// 	std::cin >> darkest_secret;
// }

// void Person::set_person (char *str)
// {
// 	first_name = str;
// 	std::cout << first_name << '\n';
// }


