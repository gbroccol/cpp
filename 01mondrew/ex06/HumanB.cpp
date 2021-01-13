/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 23:36:40 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:18:35 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const &a_name) : _name(a_name), _arsenal(0) {

	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void			HumanB::attack(void) const {

	std::cout << this->convertNameToUpper() << " attacks with his " 
								<< this->convertWeaponToUpper() << std::endl;
	return ;
}

/*
void	HumanB::attack(void) {

	std::cout << this->_name << " attacks with his " << _arsenal->getType() 
															<< std::endl;
	return ;
}
*/

void			HumanB::setWeapon(Weapon *a_arsenal) {

	this->_arsenal = a_arsenal;

	return ;
}

std::string		HumanB::convertNameToUpper(void) const {

	int			i = 0;;
	std::string	str;

	str = this->_name;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

std::string		HumanB::convertWeaponToUpper(void) const {

	int			i = 0;;
	std::string	str;

	str = _arsenal->getType();
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
