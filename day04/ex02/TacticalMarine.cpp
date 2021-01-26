/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:32:43 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 20:24:04 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) : _ColorStart("\x1b[34m"), _ColorFinish("\x1b[0m")
{
	std::cout << _ColorStart << "Tactical Marine ready for battle!" << _ColorFinish << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & ClassToCopy )
{
	std::cout << _ColorStart << "Tactical Marine ready for battle!" << _ColorFinish << std::endl;
	*this = ClassToCopy;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << _ColorStart << "Aaargh..." << _ColorFinish << std::endl;
}

// TacticalMarine		*TacticalMarine::clone(void) const
// {
// 	// returns a copy of the current object

	
// 	return this;
// }

void				TacticalMarine::battleCry(void) const
{
	std::cout << _ColorStart << "For the holy PLOT!" << _ColorFinish << std::endl;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << _ColorStart << "* attacks with a bolter *" << _ColorFinish << std::endl;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << _ColorStart << "* attacks with a chainsword *" << _ColorFinish << std::endl;
}

/*
** overload
*/
// TacticalMarine		&TacticalMarine::operator=(TacticalMarine const & src)
// {
	
// }
