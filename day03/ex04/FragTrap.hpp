/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:19:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 18:49:56 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

		const int			_d_hit;
		const unsigned int	_d_hit_max;
		const int			_d_energy;
		const unsigned int	_d_energy_max;
		const int			_d_melee_damage; 								// ближний бой
		const int			_d_ranged_damage;								// дальний бой
		const int			_d_armor_damage_reduction;

	public:

		FragTrap( void );											// CONONICAL FORM
		FragTrap( std::string Name );
		FragTrap( FragTrap const & ClassToCopy );					// CONONICAL FORM
		~FragTrap( void );											// CONONICAL FORM

		/* get */
		int					getDefHit(void) const; 
		int					getDefHitMax(void) const; 
		int					getDefEnergy(void) const; 
		int					getDefEnergyMax(void) const; 
		int					getDefLevel(void) const; 
		std::string			getDefName(void) const; 
		int					getDefMeleeDamage(void) const; 
		int					getDefRangedDamage(void) const; 
		int					getDefArmorDamageReduction(void) const;

		/* actions */
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				vaulthunter_dot_exe(std :: string const & target);

		/* overload */
		FragTrap			&operator=(FragTrap const & src);		// CONONICAL FORM
};

#endif
