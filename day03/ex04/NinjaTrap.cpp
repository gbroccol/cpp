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

NinjaTrap::NinjaTrap(void) : _d_hit(60), _d_hit_max(60), _d_energy(120), _d_energy_max(120), _d_melee_damage(60), _d_ranged_damage(5), _d_armor_damage_reduction(0)
{
	_hit = _d_hit;
	_hit_max = _d_hit_max;
	_energy = _d_energy;
	_energy_max = _d_energy_max;
	_level = 1;
	_name = "NINJA TRAP";
	_name_color = "\x1b[32;1m";
	_melee_damage = _d_melee_damage;
	_ranged_damage = _d_ranged_damage;
	_armor_damage_reduction = _d_armor_damage_reduction;

	std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Should we band together, we'll survive this. Our enemies will not" << std::endl;

	printData("Create robot", _name);
}

NinjaTrap::NinjaTrap(std::string name) : _d_hit(60), _d_hit_max(60), _d_energy(120), _d_energy_max(120), _d_melee_damage(60), _d_ranged_damage(5), _d_armor_damage_reduction(0)
{
	_hit = _d_hit;
	_hit_max = _d_hit_max;
	_energy = _d_energy;
	_energy_max = _d_energy_max;
	_level = 1;
	_name = name;
	_name_color = "\x1b[32;1m";
	_melee_damage = _d_melee_damage;
	_ranged_damage = _d_ranged_damage;
	_armor_damage_reduction = _d_armor_damage_reduction;
	
	std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Should we band together, we'll survive this. Our enemies will not" << std::endl;

	printData("Create robot", _name);
}

NinjaTrap::NinjaTrap( NinjaTrap const & ClassToCopy ) : _d_hit(60), _d_hit_max(60), _d_energy(120), _d_energy_max(120), _d_melee_damage(60), _d_ranged_damage(5), _d_armor_damage_reduction(0)
{
	std::cout << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "I am here" << std::endl;
	*this = ClassToCopy;
	printData("Create robot", _name);
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
	std::cout << "Adiós, hasta luego" << std::endl;
}

/*
**	get
*/

int					NinjaTrap::getDefHit(void) const {	return _d_hit; }
int					NinjaTrap::getDefHitMax(void) const { return (_d_hit_max); }
int					NinjaTrap::getDefEnergy(void) const { return (_d_energy); }
int					NinjaTrap::getDefEnergyMax(void) const { return (_d_energy_max); }
int					NinjaTrap::getDefMeleeDamage(void) const { return (_d_melee_damage); }
int					NinjaTrap::getDefRangedDamage(void) const {	return (_d_ranged_damage); }
int					NinjaTrap::getDefArmorDamageReduction(void) const {	return (_d_armor_damage_reduction); }


/*
**	actions
*/

void				NinjaTrap::rangedAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (_energy < cost)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (_energy >= cost)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "You should ALL be running!" << std::endl;
		_energy = _energy - cost;
		printData("Ranged attack", target);
	}
}

void				NinjaTrap::meleeAttack(std::string const & target)
{
	int		cost = 10;

	if (_hit <= 0)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mSorry, but I'm dead\x1b[0m" << std::endl;
		return ;
	}
	else if (_energy < cost)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "\x1b[31mI need more energy\x1b[0m" << std::endl;
	}
	else if (_energy >= cost)
	{
		std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
		std::cout << "That was satisfying, huh?" << std::endl;
		_energy = _energy - cost;
		
		printData("Melee attack", target);
	}
}

/*
**	Special attacks
*/

void				NinjaTrap::ninjaShoeboxChallenge(std :: string const & target)
{
	std::cout << _name_color << _name << " (NinjaTrap): " << "\x1b[0m";
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
