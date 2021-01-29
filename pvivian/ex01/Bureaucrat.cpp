/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:29:24 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 20:16:46 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->_name = "Bureacrat";
	this->_grade = LOWEST_GRADE;
	return;
}

Bureaucrat::Bureaucrat(char const * name, int grade)
{
	if (grade > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_name = name;
	this->_grade = (unsigned int)grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & person)
{
	*this = person;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & person)
{
	if (this != &person)
	{
		this->_grade = person.getGrade();
		this->_name = person.getName();
	}
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Invalid argument: too high grade";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Invalid argument: too low grade";
}


char const * Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}


void Bureaucrat::incrementGrade(void)
{
	if (this->_grade == HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_grade--;
	return;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade == LOWEST_GRADE)
		throw GradeTooLowException();
	this->_grade++;;
	return;
}

bool Bureaucrat::signForm(Form const & form) const
{
	if (form.getGradeToSign() > (this->_grade + 5))
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because his/her grade higher (more than +5) than a grade required to sign this form." << std::endl;
		return false;
	}
	else if (form.getGradeToExecute() == this->_grade)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because his/her grade required to execute this form." << std::endl;
		return false;
	}
	else
	{
		std::cout << this->_name << " signs the " << form.getName() << "." << std::endl;
		return true;
	}
	
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << " bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}
