/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:34:11 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 15:48:55 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon const &myWeapon) : myWeapon(myWeapon), name(name)
{
}

HumanA::~HumanA(void)
{
}

void		HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->myWeapon.getType() << std::endl;
}
