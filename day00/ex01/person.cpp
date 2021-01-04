#include "person.hpp"

Person::Person (void) {
	// std::cout << "Constructor\n";
	return ;
}

Person::~Person (void) {
	return ;
}

void Person::add_person (int set_id) {
	// std::cout << "Add person\n";
	this->id = set_id;
	std::cout << "Your id is " << this->id << std::endl;


	std::cout << "First name: ";
	std::cin >> this->first_name;
	// std::cout << "Your name is " << this->first_name << std::endl;
	std::cout << "Last name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Login: ";
	std::cin >> this->login;
	std::cout << "Postal addres: ";
	std::cin >> this->postal_address;
	std::cout << "Email address: ";
	std::cin >> this->email_address;
	std::cout << "Phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Birthday date: ";
	std::cin >> this->birthday_date;
	std::cout << "Favorite meal: ";
	std::cin >> this->favorite_meal;
	std::cout << "Underwear color: ";
	std::cin >> this->underwear_color;
	std::cout << "Darkest secret: ";
	std::cin >> this->darkest_secret;
	return ;
}

void Person::search_short (void) {
	std::cout << "|         " << "0";
	std::cout << "|" << this->first_name;
	std::cout << "|" << this->last_name;
	std::cout << "|" << this->nickname;
	std::cout << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	return ;
}

void Person::search_full (void) {
	// std::cout << "Search_full\n";
	return ;
}
