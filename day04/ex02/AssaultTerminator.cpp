/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:47:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 13:40:18 by gbroccol         ###   ########.fr       */
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
	_ColorStart = ClassToCopy.getColorStart();
	_ColorFinish = ClassToCopy.getColorFinish();
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << _ColorStart << "I’ll be back..." << _ColorFinish << std::endl;
}

/*
** get
*/

std::string					AssaultTerminator::getColorStart(void) const { return (_ColorStart); }
std::string					AssaultTerminator::getColorFinish(void) const { return (_ColorFinish); }

/*
** set
*/

void						AssaultTerminator::setColorStart(std::string value) { this->_ColorStart = value; }
void						AssaultTerminator::setColorFinish(std::string value) { this->_ColorFinish = value; }

AssaultTerminator		*AssaultTerminator::clone(void) const
{
	AssaultTerminator *newObj = new AssaultTerminator;

	newObj->setColorStart(this->getColorStart());
	newObj->setColorFinish(this->getColorFinish());
	return (newObj);
}

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
AssaultTerminator		&AssaultTerminator::operator=(AssaultTerminator const & src)
{
	_ColorStart = src.getColorStart();
	_ColorFinish = src.getColorFinish();
	return *this;
}
