/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:30:27 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/05 20:30:28 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "person.hpp"

Person::Person (void) {
	return ;
}

Person::~Person (void) {
	return ;
}

int	Person::check_person()
{
	if (this->first_name.empty() &&
		this->last_name.empty() &&
		this->nickname.empty() &&
		this->login.empty() &&
		this->postal_address.empty() &&
		this->email_address.empty() &&
		this->phone_number.empty() &&
		this->birthday_date.empty() &&
		this->favorite_meal.empty() &&
		this->underwear_color.empty() &&
		this->darkest_secret.empty())
		return (0);
	return (1);
}

int Person::add_person (int set_id) {
	this->id = set_id;
	std::cout << "\x1b[37;4m";
	std::cout << "First name: ";
    std::getline(std::cin, this->first_name);
	std::cout << "Last name: ";
    std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
    std::getline(std::cin, this->nickname);
	std::cout << "Login: ";
    std::getline(std::cin, this->login);
	std::cout << "Postal addres: ";
    std::getline(std::cin, this->postal_address);
	std::cout << "Email address: ";
    std::getline(std::cin, this->email_address);
	std::cout << "Phone number: ";
    std::getline(std::cin, this->phone_number);
	std::cout << "Birthday date: ";
    std::getline(std::cin, this->birthday_date);
	std::cout << "Favorite meal: ";
    std::getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color: ";
    std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret: ";
    std::getline(std::cin, this->darkest_secret);
	std::cout << "\x1b[0m";
	if (this->check_person() == 0)
	{
		std::cout << "\x1b[31m" << "Contact is empty, write correct values" << "\x1b[0m" << std::endl;
		return (0);
	}
	return (1);	
}

void Person::search (void) {
	std::cout << "\x1b[32m" << "|" << std::setw(10) << this->id + 1 << "|";
	std::cout.setf(std::ios::right);
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout.unsetf(std::ios::right);
	std::cout << "\x1b[0m" << std::endl;
	return ;
}

void Person::search_id (void) {
	std::cout << "\x1b[35m";
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal addres: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Birthday date: " << this->birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	std::cout << "\x1b[0m";
	return ;
}
