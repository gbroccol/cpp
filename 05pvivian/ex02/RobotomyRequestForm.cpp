/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:41:25 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 15:12:38 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Person";
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & person) : AForm(person)
{
	this->_target = person._target;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::isExecutionAllowed(executor);
	
	std::cout << "* drilling noises drilling noises DRILLING NOISES *" << std::endl;
	srand(rand() % 1000);
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " is successfully robotomized." << std::endl;
	else
		std::cout <<  "Robotomization of " << this->_target << " is failed." << std::endl;
	return;
}
