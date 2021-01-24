/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:23:33 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 20:23:34 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap( void );											// CONONICAL FORM
		SuperTrap( std::string Name );
		SuperTrap( SuperTrap const & ClassToCopy );					// CONONICAL FORM
		~SuperTrap( void );											// CONONICAL FORM

		/* actions */
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);

		void				vaulthunter_dot_exe(std :: string const & target);

		void				ninjaShoebox(ClapTrap const & target);
		void				ninjaShoebox(FragTrap const & target);
		void				ninjaShoebox(ScavTrap const & target);
		void				ninjaShoebox(NinjaTrap const & target);

		/* overload */
		SuperTrap			&operator=(SuperTrap const & src);		// CONONICAL FORM
};

#endif
