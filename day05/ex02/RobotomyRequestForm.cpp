/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:48:01 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/04 19:42:40 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	_Target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
	if (this == nullptr)
		throw NullException();
	_Target = src._Target;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		_Target = rhs._Target;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (accessExecute(executor))
	{
		std::cout << executor.getName() << std::endl;
		std::cout << "Target is " << _Target << std::endl;
		// std::cout << executor.getName() << " is executing the " << this->getName() << std::endl;
			
		// Action: Makes some drilling noises, and tell us that <target> has been robotomized
		// successfully 50% of the time. Otherwise, tell us it’s a failure.
		
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */