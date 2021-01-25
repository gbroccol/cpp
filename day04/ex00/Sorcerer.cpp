/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:22:52 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 12:21:46 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & ClassToCopy )
{
	*this = ClassToCopy;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

/* 
** get 
*/
std::string			Sorcerer::getName() const { return (this->_name); }
std::string			Sorcerer::getTitle() const { return (this->_title); }

/*
** polymorph
*/
void				Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

/*
**	overload
*/
Sorcerer			&Sorcerer::operator=(Sorcerer const &src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
