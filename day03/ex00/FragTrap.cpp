/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:18:49 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/20 21:43:27 by gbroccol         ###   ########.fr       */
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
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_damage_reduction = 5;

	std::cout << this->_name << ": " << "\x1b[0m";
	std::cout << "MEEEEEEEEleleleleleWOOOWOWOWOWWOWO. Seem to me all the uses of this world!" << std::endl;

	this->printData("Create robot", _name);
}

FragTrap::FragTrap(std::string name)
{
	this->_hit = 100;
	this->_hit_max = 100;
	this->_energy = 100;
	this->_energy_max = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << this->_name << ": " << "\x1b[0m";
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
**	get
*/

int					FragTrap::getHit(void) const
{
	return (this->_hit);
}

int					FragTrap::getHitMax(void) const
{
	return (this->_hit_max);
}

int					FragTrap::getEnergy(void) const
{
	return (this->_energy);
}

int					FragTrap::getEnergyMax(void) const
{
	return (this->_energy_max);
}

int					FragTrap::getLevel(void) const
{
	return (this->_level);
}

std::string			FragTrap::getName(void) const
{
	return (this->_name);
}

int					FragTrap::getMeleeDamage(void) const
{
	return (this->_melee_damage);
}

int					FragTrap::getRangedDamage(void) const
{
	return (this->_ranged_damage);
}

int					FragTrap::getArmorDamageReduction(void) const
{
	return (this->_armor_damage_reduction);
}

/*
**	set
*/

void				FragTrap::setName(std::string name)
{
	std::string		old_name = this->_name;
	
	this->_name = name;
	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	std::cout << "My name is " << this->_name << std::endl;
	this->printData("Change name", old_name);
	return ;
}

void				FragTrap::setNameColor(std::string color)
{
	this->_name_color = color;
	return ;
}

/*
**	actions
*/

#include <iomanip>

void				FragTrap::printData(std::string action, std::string target)
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
		
		// std::cout << "Damage: " << _ranged_damage << std::endl;
		// std::cout << "Energy: " << cost << std::endl;
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
		// std::cout << "Damage: " << _melee_damage << std::endl;
		// std::cout << "Energy: " << cost << std::endl;
		this->_energy = this->_energy - cost;
		
		this->printData("Melee attack", target);
	}
}

void				FragTrap::vaulthunter_dot_exe(std :: string const & target)
{
	int		cost = 25;
	// int		damage = 50;

	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	if (_hit <= 0)
	{
		// std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
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
		// std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
		std::cout << phrases[nmb] << std::endl;
		// std::cout << "Damage: " << damage << std::endl;
		// std::cout << "Energy: " << cost << std::endl;
		this->printData(attacks[nmb], target);
	}
	else
	{
		std::cout << "\x1b[31mI can not attack, too few energy\x1b[0m" << std::endl;	
		// this->printData("Vaulthunter attack", target);
	}
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int				nmb;

	std::cout << this->_name_color << this->_name << ": " << "\x1b[0m";
	if (this->_hit <= 0)
	{
		this->_hit = 0;
		std::cout << "\x1b[31mI'm dead. You can not damage me. Ha-ha-ha\x1b[0m" << std::endl;
		return ;
	}
	else if ((int)amount <= 0)
	{
		std::cout << "\x1b[31mDo you want to damage me with it? Hahahahahahaha...\x1b[0m" << std::endl;
	}
	else if ((this->_hit - (int)amount + this->_armor_damage_reduction) <= 0)
	{
		this->_hit = 0;
		std::cout << "\x1b[31mScoring a critical hit. Good bye!\x1b[0m" << std::endl;
		// std::cout << "Damage: " << amount << std::endl;
		std::cout << "Armor:  " << this->_armor_damage_reduction << std::endl;
		this->printData("Take damage", _name);
	}
	else
	{
		this->_hit = this->_hit - (int)amount + this->_armor_damage_reduction;
		const int		com_nmb = 7;
		nmb = rand() % com_nmb;
		std::string		damage[com_nmb] = { "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!",
											"My servos... are seizing...", 
											"I can see... the code",
											"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!",
											"I'll tell you, man -- being a god sucks",
											"I must seek cover quickly, pain is coming.",
											"I will not die here. I have too much left to do. And too much ammo."};
		std::cout << damage[nmb] << std::endl;	
		// std::cout << "Damage: " << amount << std::endl;
		std::cout << "Armor:  " << this->_armor_damage_reduction << std::endl;
		this->printData("Take damage", _name);					
	}
	// this->printData("Take damage", _name);

}

void				FragTrap::beRepaired(unsigned int amount)
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
		// std::cout << "Hit = " << _hit << std::endl;
	}
	else
		std::cout << "\x1b[31mCan not increase hit\x1b[0m" << std::endl;
	
	/* increase energy */
	// std::cout << _name_color << _name << ": " << "\x1b[0m";
	std::cout << _name_color << "           " << "\x1b[0m";
	if (amount > 0 && amount <= _energy_max && _energy < (int)_energy_max && (_energy + amount) <= _energy_max)
	{
		repair = true;
		_energy += amount;
		if (_energy > (int)_energy_max)
			_energy = _energy_max;
		std::cout << "All systems green!" << std::endl;
		// std::cout << "Energy = " << _energy << std::endl;
	}
	else
		std::cout << "\x1b[31mCan not increase energy\x1b[0m" << std::endl;
	if (repair)
		printData("Repair", _name);
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
