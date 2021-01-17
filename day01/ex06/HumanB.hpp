/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:42 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/17 15:35:42 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

// # include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	
	Weapon			*myWeapon;
	std::string		name;

public:
	HumanB(std::string const &name);
	~HumanB(void);

	void			attack(void) const;
	void			setWeapon(Weapon newWeapon);
};

HumanB::HumanB(std::string const &name) : myWeapon(0),  name(name)
{
}

HumanB::~HumanB(void)
{
}

void		HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->myWeapon->getType() << std::endl;
	// std::cout << myWeapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon newWeapon)
{
	// std::cout << newWeapon.getType() << std::endl;
	this->myWeapon = &newWeapon;
	// std::cout << this->myWeapon->getType() << std::endl;
}

#endif

