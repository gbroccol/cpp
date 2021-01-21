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

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );											// CONONICAL FORM
		FragTrap( std::string Name );
		FragTrap( FragTrap const & ClassToCopy );					// CONONICAL FORM
		~FragTrap( void );											// CONONICAL FORM

		/* actions */
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				vaulthunter_dot_exe(std :: string const & target);

		/* overload */
		FragTrap			&operator=(FragTrap const & src);		// CONONICAL FORM
};

#endif
