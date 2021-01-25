/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:25:37 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 19:28:04 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap
{
	protected:
		
		int				_hit;
		unsigned int	_hit_max;
		int				_energy;
		unsigned int	_energy_max;
		int				_level;
		std::string		_name;
		std::string		_name_color;
		int				_melee_damage;
		int				_ranged_damage;
		int				_armor_damage_reduction;
		
		void			printData(std::string action, std::string target);
		
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
		
	public:

		ClapTrap( void );											// CONONICAL FORM
		ClapTrap( std::string Name );
		ClapTrap( ClapTrap const & ClassToCopy );					// CONONICAL FORM
		~ClapTrap( void );											// CONONICAL FORM

		/* actions */
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		
		/* overload */
		ClapTrap			&operator=(ClapTrap const & src);		// CONONICAL FORM
	
};

#endif
