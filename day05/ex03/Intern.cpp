/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:50:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 15:50:16 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() : _MyForms(0) {}

// Intern::Intern( const Intern & src )
// {
// 	_MyForms = src.getMyForms();
// }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Intern &				Intern::operator=( Intern const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		_MyForms = rhs.getMyForms();
// 	}
// 	return *this;
// }

/*
** --------------------------------- GET ----------------------------------
*/

int						Intern::getMyForms() { return(_MyForms); }

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *					Intern::makeForm(std::string form_name, std::string target)
{
	Form *result;

	if (form_name == "shrubbery creation")
	{
		result = new ShrubberyCreationForm(target);
		std::cout << "Intern creates a ShrubberyCreationForm" << std::endl;
	}
	else if (form_name == "robotomy request")
	{
		result = new RobotomyRequestForm(target);
		std::cout << "Intern creates a RobotomyRequestForm" << std::endl;
	}
	else if (form_name == "presidential pardon")
	{
		result = new PresidentialPardonForm(target);
		std::cout << "Intern creates a PresidentialPardonForm" << std::endl;
	}
	else
	{
		throw std::invalid_argument("Error. Requested form is not known");
		return (NULL);
	}
	_MyForms++;
	return result;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
