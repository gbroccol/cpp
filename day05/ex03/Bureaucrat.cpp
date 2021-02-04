/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:36:39 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/04 19:30:57 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int grade) : _Name(name)
{
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	_Grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _Name(src.getName()), _Grade(src.getGrade())
{
	// if (this == nullptr)
	// 	throw NullException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	// if (this == nullptr)
	// 	throw NullException();
	if ( this != &rhs )
	{
		this->_Grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "\x1b[34m" << i.getName() << ", bureaucrat grade " << i.getGrade() << "\x1b[0m" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Invalid argument: too high grade";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Invalid argument: too low grade";
}

const char * Bureaucrat::NullException::what(void) const throw()
{
	return "Error. Argument is NULL";
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string 				Bureaucrat::getName(void) const 
{
	// if (this == nullptr)
	// 	throw NullException();
	return (_Name);
}

int							Bureaucrat::getGrade(void) const
{
	// if (this == nullptr)
	// 	throw NullException();
	return (_Grade);
}

void						Bureaucrat::incrementGrade(void)
{
	// if (this == nullptr)
	// 	throw NullException();
	if (_Grade == HIGHEST_GRADE)
		throw GradeTooHighException();
	_Grade--;
}

void						Bureaucrat::decrementGrade(void)
{
	// if (this == nullptr)
	// 	throw NullException();
	if (_Grade == LOWEST_GRADE)
		throw GradeTooLowException();
	_Grade++;
}

bool						Bureaucrat::signForm(Form &form)
{
	if (form.getValue())
	{
		std::cout << _Name << " cannot sign " << form.getName() << " because the form is already signed" << std::endl;
		return (false);
	}
	else
		std::cout << _Name << " signs " << form.getName() << std::endl;
	return (true);
}

void						Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
	std::cout << this->_Name << " executed " << form.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
