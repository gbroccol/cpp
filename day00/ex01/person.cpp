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
	// std::cout << "Your id is " << this->id << std::endl;

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

// int r=—25;
// cout.setf(ios::right);
// cout.width(15);
// cout << «r=» << r << endl;

void Person::search_short (void) {

	// std::cout.setf(std::ios::right);
	// std::cout.width(10);

	std::cout << "\x1b[32m|         \x1b[0m" << this->id + 1;

	
	std::cout << "\x1b[32m|\x1b[0m" << this->first_name;
	std::cout << "\x1b[32m|\x1b[0m" << this->last_name;
	std::cout << "\x1b[32m|\x1b[0m" << this->nickname;

	// std::cout.unsetf(std::ios::right);
	std::cout << "\x1b[32m|\x1b[0m" << std::endl;
	std::cout << "\x1b[32m|-------------------------------------------|\x1b[0m" << std::endl;
	return ;
}

void Person::search_full (void) {
	std::cout << "\x1b[32mFirst name: \x1b[0m" << this->first_name << std::endl;
	std::cout << "\x1b[32mLast name: \x1b[0m" << this->last_name << std::endl;
	std::cout << "\x1b[32mNickname: \x1b[0m" << this->nickname << std::endl;
	std::cout << "\x1b[32mLogin: \x1b[0m" << this->login << std::endl;
	std::cout << "\x1b[32mPostal addres: \x1b[0m" << this->postal_address << std::endl;
	std::cout << "\x1b[32mEmail address: \x1b[0m" << this->email_address << std::endl;
	std::cout << "\x1b[32mPhone number: \x1b[0m" << this->phone_number << std::endl;
	std::cout << "\x1b[32mBirthday date: \x1b[0m" << this->birthday_date << std::endl;
	std::cout << "\x1b[32mFavorite meal: \x1b[0m" << this->favorite_meal << std::endl;
	std::cout << "\x1b[32mUnderwear color: \x1b[0m" << this->underwear_color << std::endl;
	std::cout << "\x1b[32mDarkest secret: \x1b[0m" << this->darkest_secret << std::endl;
	return ;
}
