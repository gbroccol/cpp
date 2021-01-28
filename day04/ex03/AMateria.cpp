/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:28 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 18:34:24 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )  : _Type("TYPE_DEFINE"), _XP(0)
{
	// std::cout << "\x1b[36m" << "Create AMateria (" << _Type << ") CONSTRUCTOR" << "\x1b[0m" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _Type(type), _XP(0)
{
	// std::cout << "\x1b[36m" << "Create AMateria (" << _Type << ") CONSTRUCTOR" << "\x1b[0m" << std::endl;
}

AMateria::AMateria( AMateria const & ClassToCopy )
{
	_Type = ClassToCopy.getType();
	_XP = ClassToCopy.getXP();
}

AMateria::~AMateria(void) {}

/* 
** get 
*/
std::string const 					& AMateria::getType(void) const { return (_Type); }
unsigned int						AMateria::getXP(void) const { return (_XP); }

/* 
** set 
*/

void 								AMateria::setType(std::string type) { _Type = type; }
void								AMateria::setXP(unsigned int xp) { _XP = xp; }

void								AMateria::use(ICharacter & target)
{
	_XP += 10;
	std::cout << "* Materia is used by " << target.getName() << " *" << std::endl;
}

/*
** overload
*/

AMateria							& AMateria::operator=(AMateria const & src)
{
	_Type = src.getType();
	_XP = src.getXP();
	return *this;
}

