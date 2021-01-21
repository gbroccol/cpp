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

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap( void );											// CONONICAL FORM
		NinjaTrap( std::string Name );
		NinjaTrap( NinjaTrap const & ClassToCopy );					// CONONICAL FORM
		~NinjaTrap( void );											// CONONICAL FORM

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