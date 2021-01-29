/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:34:31 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 13:00:11 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim( Victim const & ClassToCopy )
{
	_name = ClassToCopy.getName();
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

/*
** get
*/
std::string			Victim::getName() const { return (this->_name); }

/*
** polymorphed
*/
void				Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

/*
**	overload
*/

Victim			&Victim::operator=(Victim const &src)
{
	this->_name = src.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const & src)
{
	o << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return o;
}
