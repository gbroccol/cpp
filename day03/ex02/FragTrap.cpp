/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:18:49 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 19:07:30 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hit = 100;
	this->_hit_max = 100;
	this->_energy = 100;
	this->_energy_max = 100;
	this->_level = 1;
	this->_name = "DEFAULT NAME";
	this->_name_color = "\x1b[35;1m";
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_damage_reduction = 5;

	std::cout << _name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "MEEEEEEEEleleleleleWOOOWOWOWOWWOWO. Seem to me all the uses of this world!" << std::endl;

	this->printData("Create robot", _name);
}

FragTrap::FragTrap(std::string name) : ClapTrap( name )
{
	this->_hit = 100;
	this->_hit_max = 100;
	this->_energy = 100;
	this->_energy_max = 100;
	this->_level = 1;
	this->_name = name;
	this->_name_color = "\x1b[35;1m";
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << _name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "Hocus pocus! Who is the target?" << std::endl;

	this->printData("Create robot", _name);
	
}

FragTrap::FragTrap( FragTrap const & ClassToCopy )
{
	std::cout << this->_name << ": " << "\x1b[0m";
	std::cout << "Let me teach you the ways of magic! Just tell me what to shoot." << std::endl;
	*this = ClassToCopy;
	this->printData("Create robot", _name);
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "I disappear! Goodbye!" << std::endl;
}

/*
**	actions
*/

void				FragTrap::rangedAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "Sorry, did that hurt? That \"sorry\" was sarcasm I am not sorry" << std::endl;
		this->_energy = this->_energy - cost;
		
		this->printData("Ranged attack", target);
	}
}

void				FragTrap::meleeAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (this->_energy < cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;
	}
	else if (this->_energy >= cost)
	{
		std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << "How hilarious. Your death approaches." << std::endl;
		this->_energy = this->_energy - cost;
		
		this->printData("Melee attack", target);
	}
}

void				FragTrap::vaulthunter_dot_exe(std :: string const & target)
{
	int		cost = 25;

	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	if (_hit <= 0)
	{
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	if (this->_energy >= cost)
	{
		this->_energy -= cost;
		int				nmb;
		const int		com_nmb = 5;
		std::string		attacks[com_nmb] = {"Physical",
											"Incendiary", 
											"Corrosive",
											"Shock",
											"Explosive"};
		std::string		phrases[com_nmb] = {"Your pain is delicious",
											"Hey, this area kinda smells like dead people",
											"Time to die, bad guy!",
											"This will hurt",
											"Assassination. It’s hard work, but also art. I love what I do."};
		nmb = rand() % com_nmb;
		std::cout << phrases[nmb] << std::endl;
		this->printData(attacks[nmb], target);
	}
	else
	{
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;	
	}
}

/*
**	overload
*/

FragTrap			&FragTrap::operator=(FragTrap const &src)
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
