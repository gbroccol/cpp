/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:22:41 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 20:29:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
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
		NinjaTrap( void );											// CONONICAL FORM
		NinjaTrap( std::string Name );
		NinjaTrap( NinjaTrap const & ClassToCopy );					// CONONICAL FORM
		~NinjaTrap( void );											// CONONICAL FORM

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

		/* special attacks */
		void				ninjaShoeboxChallenge(std :: string const & target);
		void				ninjaShoebox(ClapTrap const & target);
		void				ninjaShoebox(FragTrap const & target);
		void				ninjaShoebox(ScavTrap const & target);
		void				ninjaShoebox(NinjaTrap const & target);

		/* overload */
		NinjaTrap			&operator=(NinjaTrap const & src);		// CONONICAL FORM
};

#endif
