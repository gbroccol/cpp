/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:31:12 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:36:47 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"

Slave::Slave(void) : Victim ("Victim") {} 

Slave::Slave(std::string name) : Victim( name )
{
	_name = name;
	std::cout << "A slave does not choose his master" << std::endl;
}

Slave::Slave( Slave const & ClassToCopy ) : Victim( ClassToCopy )
{
	return ;
}

Slave::~Slave()
{
	std::cout << "It's time to rest" << std::endl;
}

/*
** polymorphed
*/
void				Slave::getPolymorphed() const
{
	std::cout << _name << " has been turned into a freedom-loving wolf!" << std::endl;
}

/*
**	overload
*/

Slave			&Slave::operator=(Slave const &src)
{
	this->_name = src.getName();
	return *this;
}
