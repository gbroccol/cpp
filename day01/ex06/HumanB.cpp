/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:28 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 15:19:01 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : myWeapon(0),  name(name)
{
}

HumanB::~HumanB(void)
{
}

void		HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->myWeapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &newWeapon) // ссылка // ссылка-параметр работает как псевдоним аргумента, а сам аргумент не копируется при передаче в параметр
{
	this->myWeapon = &newWeapon; // адрес
}