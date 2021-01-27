/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:43 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 20:20:47 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	_Type = "cure";
	_XP = 0;
}

Cure::Cure( std::string const & type ) : AMateria(type)
{
	_Type = type;
	_XP = 0;
}

Cure::Cure( Cure const & ClassToCopy )
{
	_Type = getType();
	_XP = getXP();
}

Cure::~Cure(void) {}

/* 
** get 
*/
std::string const 					& Cure::getType(void) const { return (_Type); }
unsigned int						Cure::getXP(void) const { return (_XP); }

/* 
** set 
*/

void 								Cure::setType(std::string type) { _Type = type; }
void								Cure::setXP(unsigned int xp) { _XP = xp; }

Cure									* Cure::clone(void) const
{
	Cure	*newObj = new Cure;
	newObj->setType(_Type);
	newObj->setXP(_XP);
	return (newObj);
}

void								Cure::use(ICharacter &target)
{
	_XP += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/* 
** overload 
*/

Cure									&Cure::operator=(Cure const & src)
{
	_Type = src.getType();
	_XP = src.getXP();
	return *this;
}