/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:21:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 18:50:24 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_hit = 100;
	_hit_max = 100;
	_energy = 50;
	_energy_max = 50;
	_level = 1;
	_name = "DEFAULT NAME";
	_melee_damage = 20;
	_ranged_damage = 15;
	_armor_damage_reduction = 3;

	std::cout << _name << ": " << "\x1b[0m";
	std::cout << "Nice to meet you all. If anyone tries to capture me, I'll incinerate their brain" << std::endl;

	printData("Create robot", _name);
}

ScavTrap::ScavTrap(std::string name)
{
	_hit = 100;
	_hit_max = 100;
	_energy = 50;
	_energy_max = 50;
	_level = 1;
	_name = name;
	_melee_damage = 20;
	_ranged_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << _name << ": " << "\x1b[0m";
	std::cout << "Should we band together, we'll survive this. Our enemies will not" << std::endl;

	printData("Create robot", _name);
}

ScavTrap::ScavTrap( ScavTrap const & ClassToCopy )
{
	std::cout << _name << ": " << "\x1b[0m";
	std::cout << "I am here" << std::endl;
	*this = ClassToCopy;
	printData("Create robot", _name);
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "Bye. See you later" << std::endl;
}

/*
**	actions
*/

void				ScavTrap::rangedAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "Looks like my training is paying off!" << std::endl;
		this->_energy = this->_energy - cost;
		this->printData("Ranged attack", target);
	}
}

void				ScavTrap::meleeAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "Fear me, bitches!" << std::endl;
		this->_energy = this->_energy - cost;
		
		this->printData("Melee attack", target);
	}
}

void				ScavTrap::challengeNewcomer(std :: string const & target)
{
	int		cost = 10;

	std::cout << _name_color << _name << ": " << "\x1b[0m";
	if (_hit <= 0)
	{
		std::cout << "\x1b[31mI'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (_energy >= cost)
	{
		_energy -= cost;
		int				nmb;
		const int		com_nmb = 5;
		std::string		challenges[com_nmb] = 	{ "Ice Bucket Challenge",
													"Skate Boarding Challenge", 
													"Loud music Challenge",
													"No Lights Challenge",
													"Catch An Egg Challenge"};
		std::string		phrases[com_nmb] =		{"It will be funny",
													"Ha-ha-ha",
													"I enjoy that",
													"Wow that's cool",
													"Oh my god"};
		nmb = rand() % com_nmb;
		std::cout << phrases[nmb] << std::endl;
		std::cout << "Energy: " << cost << std::endl;
		printData(challenges[nmb], target);
	}
	else
		std::cout << "I can not challenge him, too few energy" << std::endl;
}

/*
**	overload
*/

ScavTrap			&ScavTrap::operator=(ScavTrap const &src)
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
