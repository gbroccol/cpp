/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:11:18 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 18:50:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );											// CONONICAL FORM
		ScavTrap( std::string Name );
		ScavTrap( ScavTrap const & ClassToCopy );					// CONONICAL FORM
		~ScavTrap( void );											// CONONICAL FORM

		/* actions */
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				challengeNewcomer(std :: string const & target);

		/* overload */
		ScavTrap			&operator=(ScavTrap const & src);		// CONONICAL FORM
};

#endif
