/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:48 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 21:00:25 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria ("ice")
{
	_Type = "ice";
	_XP = 0;
}

Ice::Ice( std::string const & type ) : AMateria (type)
{
	_Type = type;
	_XP = 0;
}

Ice::Ice( Ice const & ClassToCopy )
{
	_Type = getType();
	_XP = getXP();
}

Ice::~Ice(void) {}

Ice									* Ice::clone(void) const
{
	Ice	*newObj = new Ice;
	newObj->setType(_Type);
	newObj->setXP(_XP);
	return (newObj);
}

void								Ice::use(ICharacter &target)
{
	_XP += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* 
** overload 
*/

Ice									&Ice::operator=(Ice const & src)
{
	_Type = src.getType();
	_XP = src.getXP();
	return *this;
}