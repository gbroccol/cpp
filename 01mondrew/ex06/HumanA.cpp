/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 23:28:14 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:17:04 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>
#include <ctype.h>

HumanA::HumanA(std::string const &a_name, Weapon const &a_arsenal) : 
											_name(a_name), _arsenal(a_arsenal) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void			HumanA::attack(void) const {

	std::cout << this->convertNameToUpper() << " attacks with his " 
								<< this->convertWeaponToUpper() << std::endl;
	return ;
}

/*
void			HumanA::attack(void) {

	std::cout << this->_name << " attacks with his " << _arsenal.getType() 
																<< std::endl;
	return ;
}
*/

std::string		HumanA::convertNameToUpper(void) const {

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

std::string 	HumanA::convertWeaponToUpper(void) const {

	int			i = 0;;
	std::string	str;

	str = _arsenal.getType();
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
