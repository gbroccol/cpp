/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:57:40 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/13 13:52:42 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern::Intern(Intern const & person)
{
	*this = person;
	return;
}

Intern & Intern::operator=(Intern const & person)
{
	if (this != &person)
		return *this;
	return *this;
}

AForm * Intern::makeShrubberyForm(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}

AForm * Intern::makeRobotomyForm(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

AForm * Intern::makePresidentialForm(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(std::string const & formType, std::string const & target)
{
	AForm * newForm;
	AForm * (Intern::*forms[3])(std::string const & target) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm};
	std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (int i = 0; i < 3; i++)
	{
		if (formType == types[i])
		{
			newForm = (this->*forms[i])(target);
			std::cout << "Intern creates a " << newForm->getName() << std::endl;
			return newForm;
		}
	}
	throw std::invalid_argument("Unknown form type.");
}
