/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:28:30 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 20:07:29 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const & name) : _Name(name), _AP(40), _MyWeapon(NULL) {}

Character::Character( Character const & ClassToCopy )
{
	*this = ClassToCopy;
	return ;
}

Character::~Character()
{
	
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
	if (_MyWeapon != NULL)
	{
		if (_AP >= _MyWeapon->getAPCost())
		{
			std::cout << _Name << " attacks " << enemy->getType() << " with a " << _MyWeapon->getName() << std::endl; // change
			
			
			_AP -= _MyWeapon->getAPCost();
			// Затем вы вычтете к HP врага значение урона оружия.
			// После этого, если у цели 0 HP или меньше, вы должны удалить его.
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
	this->_Name = src.getName();
	this->_AP = src.getAP();
	this->_MyWeapon = src.getWeapon();
	return *this;
}

std::ostream		& operator<<(std::ostream & o, Character const & src)
{
// 	NAME has AP_NUMBER AP and wields a WEAPON_NAME
// if there’s a weapon equipped. Else, it will display:
// NAME has AP_NUMBER AP and is unarmed

	if (src.getWeapon() == NULL)
		o << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	else
		o << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	return o;
}