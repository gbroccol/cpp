/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:18:49 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 21:14:43 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_hit = 100;
	_hit_max = 100;
	_energy = 100;
	_energy_max = 100;
	_level = 1;
	_name = "DEFAULT NAME";
	_name_color = "\x1b[33;1m";
	_melee_damage = 30;
	_ranged_damage = 20;
	_armor_damage_reduction = 5;

	std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
	std::cout << "MEEEEEEEEleleleleleWOOOWOWOWOWWOWO. Seem to me all the uses of this world!" << std::endl;

	printData("Create robot", _name);
}

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	_hit = 100;
	_hit_max = 100;
	_energy = 100;
	_energy_max = 100;
	_level = 1;
	_name = name;
	_name_color = "\x1b[33;1m";
	_melee_damage = 30;
	_ranged_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
	std::cout << "Hocus pocus! Who is the target?" << std::endl;

	printData("Create robot", _name);
	
}

FragTrap::FragTrap( FragTrap const & ClassToCopy )
{
	std::cout << _name << " (FragTrap): " << "\x1b[0m";
	std::cout << "Let me teach you the ways of magic! Just tell me what to shoot." << std::endl;
	*this = ClassToCopy;
	printData("Create robot", _name);
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
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
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (_energy < cost)
	{
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;
	}
	else if (_energy >= cost)
	{
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "Sorry, did that hurt? That \"sorry\" was sarcasm I am not sorry" << std::endl;
		_energy = _energy - cost;
		
		printData("Ranged attack", target);
	}
}

void				FragTrap::meleeAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (_energy < cost)
	{
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;
	}
	else if (_energy >= cost)
	{
		std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
		std::cout << "How hilarious. Your death approaches." << std::endl;
		_energy = _energy - cost;
		
		printData("Melee attack", target);
	}
}

void				FragTrap::vaulthunter_dot_exe(std :: string const & target)
{
	int		cost = 25;

	std::cout << _name_color << _name << " (FragTrap): " << "\x1b[0m";
	if (_hit <= 0)
	{
		std::cout << "\x1b[31mI can not attack. I'm dead\x1b[0m" << std::endl;
		return ;
	}
	if (_energy >= cost)
	{
		_energy -= cost;
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
		printData(attacks[nmb], target);
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
	_hit = src.getHit();
	_hit_max = src.getHitMax();
	_energy = src.getEnergy();
	_energy_max = src.getEnergyMax();
	_level = src.getLevel();
	_name = src.getName();
	_melee_damage = src.getMeleeDamage();
	_ranged_damage = src.getRangedDamage();
	_armor_damage_reduction = src.getArmorDamageReduction();
	return *this;
}
