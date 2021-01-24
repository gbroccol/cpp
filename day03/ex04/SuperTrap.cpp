/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:23:09 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 20:23:10 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

SuperTrap::SuperTrap(void)
{
	_hit = FragTrap::getDefHit();
	_hit_max = FragTrap::getDefHitMax();
	_energy = NinjaTrap::getDefEnergy();
	_energy_max = NinjaTrap::getDefEnergyMax();
	_level = 1;
	_name = "SUPER TRAP";
	_name_color = "\x1b[34;1m";
	_melee_damage = NinjaTrap::getDefMeleeDamage();
	_ranged_damage = FragTrap::getDefRangedDamage();
	_armor_damage_reduction = FragTrap::getDefArmorDamageReduction();

	std::cout << _name_color << _name << " (SuperTrap): " << "\x1b[0m";
	std::cout << "Nice to meet you all. If anyone tries to capture me, I'll incinerate their brain" << std::endl;

	printData("Create robot", _name);
}

SuperTrap::SuperTrap(std::string name) : ClapTrap( name ), FragTrap ( name ), NinjaTrap ( name )
{
	_hit = FragTrap::getDefHit();
	_hit_max = FragTrap::getDefHitMax();
	_energy = NinjaTrap::getDefEnergy();
	_energy_max = NinjaTrap::getDefEnergyMax();
	_level = 1;
	_name = name;
	_name_color = "\x1b[34;1m";
	_melee_damage = NinjaTrap::getDefMeleeDamage();
	_ranged_damage = FragTrap::getDefRangedDamage();
	_armor_damage_reduction = FragTrap::getDefArmorDamageReduction();
	std::cout << _name_color << _name << " (SuperTrap): " << "\x1b[0m";
	std::cout << "Nice to meet you all. If anyone tries to capture me, I'll incinerate their brain" << std::endl;

	printData("Create robot", _name);
}

SuperTrap::SuperTrap( SuperTrap const & ClassToCopy )
{
	std::cout << _name << " (SuperTrap): " << "\x1b[0m";
	std::cout << "I am here" << std::endl;
	*this = ClassToCopy;
	printData("Create robot", _name);
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name_color << this->_name << " (SuperTrap): " << "\x1b[0m";
	std::cout << "Bye. See you later" << std::endl;
}

/*
**	actions
*/

void				SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void				SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void				SuperTrap::vaulthunter_dot_exe(std :: string const & target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

void				SuperTrap::ninjaShoebox(ClapTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void				SuperTrap::ninjaShoebox(FragTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void				SuperTrap::ninjaShoebox(ScavTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void				SuperTrap::ninjaShoebox(NinjaTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}



/*
**	overload
*/

SuperTrap			&SuperTrap::operator=(SuperTrap const &src)
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
