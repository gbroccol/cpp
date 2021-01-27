/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:32:43 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 13:40:36 by gbroccol         ###   ########.fr       */
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
	_ColorStart = ClassToCopy.getColorStart();
	_ColorFinish = ClassToCopy.getColorFinish();
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << _ColorStart << "Aaargh..." << _ColorFinish << std::endl;
}


/*
** get
*/

std::string					TacticalMarine::getColorStart(void) const { return (_ColorStart); }
std::string					TacticalMarine::getColorFinish(void) const { return (_ColorFinish); }

/*
** set
*/

void						TacticalMarine::setColorStart(std::string value) { this->_ColorStart = value; }
void						TacticalMarine::setColorFinish(std::string value) { this->_ColorFinish = value; }

TacticalMarine		*TacticalMarine::clone(void) const
{
	TacticalMarine *newObj = new TacticalMarine;

	newObj->setColorStart(this->getColorStart());
	newObj->setColorFinish(this->getColorFinish());
	return (newObj);
}

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
TacticalMarine		&TacticalMarine::operator=(TacticalMarine const & src)
{
	_ColorStart = src.getColorStart();
	_ColorFinish = src.getColorFinish();
	return *this;
}
