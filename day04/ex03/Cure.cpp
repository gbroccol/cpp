/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:43 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 18:33:37 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( std::string const & type ) : AMateria(type) {}

Cure::Cure( Cure const & src )
{
	_Type = src.getType();
	_XP = src.getXP();
}

Cure::~Cure(void) {}

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
	// std::cout << "I have " << _XP << " now! Wow!" << std::endl;
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