/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:22:29 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 21:15:20 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	_hit = 60;
	_hit_max = 60;
	_energy = 120;
	_energy_max = 120;
	_level = 1;
	_name = "DEFAULT NAME";
	_melee_damage = 60;
	_ranged_damage = 5;
	_armor_damage_reduction = 0;

	std::cout << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Should we band together, we'll survive this. Our enemies will not" << std::endl;

	printData("Create robot", _name);
}

NinjaTrap::NinjaTrap(std::string name)
{
	_hit = 60;
	_hit_max = 60;
	_energy = 120;
	_energy_max = 120;
	_level = 1;
	_name = name;
	_melee_damage = 60;
	_ranged_damage = 5;
	_armor_damage_reduction = 0;
	
	std::cout << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Should we band together, we'll survive this. Our enemies will not" << std::endl;

	printData("Create robot", _name);
}

NinjaTrap::NinjaTrap( NinjaTrap const & ClassToCopy )
{
	std::cout << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "I am here" << std::endl;
	*this = ClassToCopy;
	printData("Create robot", _name);
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Adiós, hasta luego" << std::endl;
}

/*
**	actions
*/

void				NinjaTrap::rangedAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "You should ALL be running!" << std::endl;
		this->_energy = this->_energy - cost;
		this->printData("Ranged attack", target);
	}
}

void				NinjaTrap::meleeAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "That was satisfying, huh?" << std::endl;
		this->_energy = this->_energy - cost;
		
		this->printData("Melee attack", target);
	}
}

/*
**	Special attacks
*/

void				NinjaTrap::ninjaShoeboxChallenge(std :: string const & target)
{
	std::cout << _name_color << _name << ": " << "\x1b[0m";
	if (_hit <= 0)
	{
		std::cout << "\x1b[31mI'm dead\x1b[0m" << std::endl;
		return ;
	}
	else
	{
		int				nmb;
		const int		com_nmb = 5;
		std::string		challenges[com_nmb] = 	{ "Dance with me",
													"Sing loud", 
													"Jump 100 times",
													"Hopscotch",
													"Climb the mount"};
		std::string		phrases[com_nmb] =		{"Keep your eyes peeled",
													"Go down a rabbit hole",
													"Put a pin in it",
													"Rise and shine",
													"Keep your shirt on"};
		nmb = rand() % com_nmb;
		std::cout << phrases[nmb] << std::endl;
		printData(challenges[nmb], target);
	}
}

void				NinjaTrap::ninjaShoebox(ClapTrap const & target) 
{
	ninjaShoeboxChallenge(target.getName());
	return ;
}

void				NinjaTrap::ninjaShoebox(FragTrap const & target) 
{
	ninjaShoeboxChallenge(target.getName());
	return ;
}

void				NinjaTrap::ninjaShoebox(ScavTrap const & target) 
{
	ninjaShoeboxChallenge(target.getName());
	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap const & target) 
{
	ninjaShoeboxChallenge(target.getName());
	return ;
}

/*
**	overload
*/

NinjaTrap			&NinjaTrap::operator=(NinjaTrap const &src)
{
	this->_hit = src.getHit();
	this->_hit_max = src.getHitMax();
	this->_energy = src.getEnergy();
	this->_energy_max = src.getEnergyMax();
	this->_level = src.getLevel();
	this->_name = src.getName();
	this->_melee_damage = src.getMeleeDamage();
	this->_ranged_damage = src.getRangedDamage();
	this->_armor_damage_reduction = src.getArmorDamageReduction();
	return *this;
}
