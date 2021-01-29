/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:55:31 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 15:04:39 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim ("Victim") {} 

Peon::Peon(std::string name) : Victim( name )
{
	_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & ClassToCopy ) : Victim( ClassToCopy )
{
	_name = ClassToCopy.getName();
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** polymorphed
*/
void				Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

/*
**	overload
*/

Peon			&Peon::operator=(Peon const &src)
{
	this->_name = src.getName();
	return *this;
}
