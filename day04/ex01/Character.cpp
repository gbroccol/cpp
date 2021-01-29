/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:28:30 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 14:48:22 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const & name) : _Name(name), _AP(40), _MyWeapon(NULL) {}

Character::Character( Character const & ClassToCopy )
{
	_Name = ClassToCopy.getName();
	_AP = ClassToCopy.getAP();
	_MyWeapon = ClassToCopy.getWeapon();
	return ;
}

Character::~Character()
{
	std::cout << "Oh, no" << std::endl;
}
	
void					Character::recoverAP()
{
	int		addAP = 10;
	int		maxAP = 40;
	
	if (_AP < maxAP)
	{
		_AP += addAP;
		if (_AP > maxAP)
			_AP = maxAP;
	}
}

void					Character::equip(AWeapon *weapon)
{
	_MyWeapon = weapon;
}

void					Character::attack(Enemy *enemy)
{
	if (!enemy)
	{
		std::cout << "NULL" << std::endl;
		return ;
	}
		
	if (_MyWeapon != NULL)
	{
		if (_AP >= _MyWeapon->getAPCost())
		{
			std::cout << _Name << " attacks " << enemy->getType() << " with a " << _MyWeapon->getName() << std::endl;
			
			_AP -= _MyWeapon->getAPCost();
			_MyWeapon->attack();
			enemy->takeDamage(_MyWeapon->getDamage());
			if (enemy->getHP() == 0)
			{
				delete enemy;
				enemy = NULL;	
			}
		}
	}
}

/*
** get
*/

std::string 				Character::getName() const { return (_Name); }
int							Character::getAP() const { return (_AP); }
AWeapon						*Character::getWeapon() const { return (_MyWeapon); }

/*
** overload
*/

Character			&Character::operator=(Character const & src)
{
	_Name = src.getName();
	_AP = src.getAP();
	_MyWeapon = src.getWeapon();
	return *this;
}

std::ostream		& operator<<(std::ostream & o, Character const & src)
{
	if (src.getWeapon() == NULL)
		o << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	else
		o << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	return o;
}