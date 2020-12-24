#include "contact.hpp"

Contact::Contact(): first_name("def"); last_name("def"); 
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

void Contact::set_fname (char *str)
{
	first_name = str;
	std::cout << first_name << '\n';
}
