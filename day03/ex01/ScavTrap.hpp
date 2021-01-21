/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:11:18 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 16:26:53 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <iomanip>

class ScavTrap
{
	private:
		
		int				_hit;
		unsigned int	_hit_max;
		int				_energy;
		unsigned int	_energy_max;
		int				_level;
		std::string		_name;
		std::string		_name_color;
		int				_melee_damage; 								// ближний бой
		int				_ranged_damage;								// дальний бой
		int				_armor_damage_reduction;
		
	public:

		ScavTrap( void );											// CONONICAL FORM
		ScavTrap( std::string Name );
		ScavTrap( ScavTrap const & ClassToCopy );					// CONONICAL FORM
		~ScavTrap( void );											// CONONICAL FORM

		/* get */
		int					getHit(void) const; 
		int					getHitMax(void) const; 
		int					getEnergy(void) const; 
		int					getEnergyMax(void) const; 
		int					getLevel(void) const; 
		std::string			getName(void) const; 
		int					getMeleeDamage(void) const; 
		int					getRangedDamage(void) const; 
		int					getArmorDamageReduction(void) const; 

		/* set */
		void				setName(std::string);
		void				setNameColor(std::string);

		/* actions */
		void				printData(std::string action, std::string target);
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		// void				vaulthunter_dot_exe(std :: string const & target);
		void				challengeNewcomer(std :: string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		/* overload */
		ScavTrap			&operator=(ScavTrap const & src);		// CONONICAL FORM
	
};

#endif
