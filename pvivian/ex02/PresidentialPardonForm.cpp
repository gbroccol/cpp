/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:14:56 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 15:20:09 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "Ford Prefect";
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & person) : AForm(person)
{
	this->_target = person._target;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::isExecutionAllowed(executor);
	
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}
