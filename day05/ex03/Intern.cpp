/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:50:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 14:21:17 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() {}

Intern::Intern( const Intern & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *					Intern::makeForm(std::string NameForm, std::string TargetForm)
{
	Form *result;

	ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm(TargetForm);
	RobotomyRequestForm *robotomy = new RobotomyRequestForm(TargetForm);
	PresidentialPardonForm *president = new PresidentialPardonForm(TargetForm);

	std::string types[3] = {	"shrubbery creation",
								"robotomy request",
								"presidential pardon" };

	Form *form[3] = 		{	shrubbery,
								robotomy,
								president };

	int i;
	for (i = 0; i < 3; i++)
	{
		if (NameForm == types[i])
		{
			result = form[i];
			std::cout << "Intern creates a " << result->getName() << std::endl;
			for (int j = (i + 1); j < 3; j++)
			{
				delete  form[j];
			}
			return result;
		}
		delete  form[i];
	}
	throw std::invalid_argument("Unknown form type.");
	return result;
}
