/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:47:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 20:27:20 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) : _ColorStart("\x1b[33m"), _ColorFinish("\x1b[0m")
{
	std::cout << _ColorStart << "* teleports from space *" << _ColorFinish << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & ClassToCopy )
{
	std::cout << _ColorStart << "* teleports from space *" << _ColorFinish << std::endl;
	*this = ClassToCopy;



	
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << _ColorStart << "I’ll be back..." << _ColorFinish << std::endl;
}

// AssaultTerminator		*AssaultTerminator::clone(void) const
// {
// 	// returns a copy of the current object
// 	return this;
// }

void				AssaultTerminator::battleCry(void) const
{
	std::cout << _ColorStart << "This code is unclean. PURIFY IT!" << _ColorFinish << std::endl;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << _ColorStart << "* does nothing *" << _ColorFinish << std::endl;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << _ColorStart << "* attacks with chainfists *" << _ColorFinish << std::endl;
}

/*
** overload
*/
// AssaultTerminator		&AssaultTerminator::operator=(AssaultTerminator const & src)
// {
	
// 	return *this;
// }
