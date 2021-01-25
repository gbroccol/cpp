/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:25:33 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 19:03:13 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hit = 100;
	this->_hit_max = 0;
	this->_energy = 0;
	this->_energy_max = 0;
	this->_level = 1;
	this->_name = "DEFAULT NAME";
	this->_name_color = "\x1b[32;1m";
	this->_melee_damage = 0;
	this->_ranged_damage = 0;
	this->_armor_damage_reduction = 0;

	std::cout << _name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "Mother is here" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hit = 100;
	this->_hit_max = 0;
	this->_energy = 0;
	this->_energy_max = 0;
	this->_level = 1;
	this->_name = name;
	this->_name_color = "\x1b[32;1m";
	this->_melee_damage = 0;
	this->_ranged_damage = 0;
	this->_armor_damage_reduction = 0;

	std::cout << _name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "Mother is here" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & ClassToCopy )
{
	std::cout << this->_name << ": " << "\x1b[0m";
	std::cout << "Mother is here" << std::endl;
	*this = ClassToCopy;
	return ;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "\x1b[32;1m" << this->_name << ": " << "\x1b[0m";
	std::cout << "Mother is going to sleep" << std::endl;
	return ;
}

/*
**	get
*/

int					ClapTrap::getHit(void) const {	return this->_hit; }
int					ClapTrap::getHitMax(void) const { return (this->_hit_max); }
int					ClapTrap::getEnergy(void) const { return (this->_energy); }
int					ClapTrap::getEnergyMax(void) const { return (this->_energy_max); }
int					ClapTrap::getLevel(void) const { return (this->_level); }
std::string			ClapTrap::getName(void) const {	return (this->_name); }
int					ClapTrap::getMeleeDamage(void) const { return (this->_melee_damage); }
int					ClapTrap::getRangedDamage(void) const {	return (this->_ranged_damage); }
int					ClapTrap::getArmorDamageReduction(void) const {	return (this->_armor_damage_reduction); }

/*
**	actions
*/

void				ClapTrap::printData(std::string action, std::string target)
{
	std::cout << "▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿▿" << std::endl;
	std::cout << "▹            NAME|          ACTION|          TARGET|   ENERGY POINTS|      HIT POINTS◃" << std::endl;
	std::cout << "▹";
	if (_name.length() > 16)
		std::cout << _name.substr(0, 15) << "." << "|";
	else
		std::cout << std::setw(16) << _name << "|";
	
	std::cout << "\x1b[32m";
	if (action.length() > 16)
		std::cout << action.substr(0, 15) << "." << "\x1b[0m|";
	else
		std::cout << std::setw(16) << action << "\x1b[0m|";
	
	if (target.length() > 16)
		std::cout << target.substr(0, 15) << "." << "|";
	else
		std::cout << std::setw(16) << target << "|";
	
	if (_energy > 99)
		std::cout << "             " << _energy << "|";
	else if (_energy > 9)
		std::cout << "              " << _energy << "|";
	else
		std::cout << "               " << _energy << "|";
	
	if (_hit > 99)
		std::cout << "             " << _hit << "◃";
	else if (_hit > 9)
		std::cout << "              " << _hit << "◃";
	else
		std::cout << "               " << _hit << "◃";
		
	std::cout << std::endl << "▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵▵" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	int				amount_int = amount;

	std::cout << _name_color << _name << ": " << "\x1b[0m";
	if (_hit == 0)
	{
		_hit = 0;
		std::cout << "\x1b[31mI'm dead. You can not damage me. Ha-ha-ha\x1b[0m" << std::endl;
		return ;
	}
	else if (amount_int <= 0 || amount_int <= _armor_damage_reduction)
		std::cout << "\x1b[31mHa-ha-ha! It does not work\x1b[0m" << std::endl;
	else if ((_hit - amount_int + _armor_damage_reduction) <= 0)
	{
		_hit = 0;
		std::cout << "\x1b[31mOh no, critical hit\x1b[0m" << std::endl;
		std::cout << "Armor:  " << _armor_damage_reduction << std::endl;
		printData("Take damage", _name);
	}
	else
	{
		_hit = _hit - amount_int + _armor_damage_reduction;
		std::cout << "I can see... the code" << std::endl;	
		std::cout << "Armor:  " << this->_armor_damage_reduction << std::endl;
		this->printData("Take damage", _name);
	}
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	bool		repair = false;

	/* increase hit */
	std::cout << _name_color << _name << ": " << "\x1b[0m";
	if (amount > 0 && amount <= 100 && _hit < (int)_hit_max && (_hit + amount) <= _hit_max)
	{
		repair = true;
		_hit += amount;
		if (_hit > (int)_hit_max)
			_hit = _hit_max;
		std::cout << "Good as new, I think. Am I leaking?" << std::endl;
	}
	else
		std::cout << "\x1b[31mIt is impossible\x1b[0m" << std::endl;
	
	/* increase energy */
	std::cout << _name_color << "           " << "\x1b[0m";
	if (amount > 0 && amount <= _energy_max && _energy < (int)_energy_max && (_energy + amount) <= _energy_max)
	{
		repair = true;
		_energy += amount;
		if (_energy > (int)_energy_max)
			_energy = _energy_max;
		std::cout << "Wow!!! All systems green!" << std::endl; // All systems green!
	}
	else
		std::cout << "\x1b[31mCan not increase energy\x1b[0m" << std::endl; // Can not increase energy
	if (repair)
		printData("Repair", _name);
}

/*
**	overload
*/

ClapTrap			&ClapTrap::operator=(ClapTrap const &src)
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
