/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:22:04 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 19:45:57 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _gradeToSign(HIGHEST_GRADE), _gradeToExecute(LOWEST_GRADE)
{
	this->_name = "AForm";
	this->_isSigned = false;	
	return;
}

AForm::AForm(char const * name, int toSign, int toExecute) : _gradeToSign(toSign), _gradeToExecute(toExecute)
{
	if (this->_gradeToSign > LOWEST_GRADE || this->_gradeToExecute > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (this->_gradeToSign < HIGHEST_GRADE || this->_gradeToExecute < HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_name = name;
	this->_isSigned = false;
	return;
}

AForm::AForm(AForm const & person) : _name(person.getName()), _gradeToSign(person.getGradeToSign()),
								_gradeToExecute(person.getGradeToExecute()), _isSigned(person.getIfSigned())
{
	return;
}

AForm::~AForm(void)
{
	return;
}

AForm & AForm::operator=(AForm const & form)
{
	if (this != &form)
		this->_isSigned = form.getIfSigned();
	return *this;
}

AForm::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

AForm::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

AForm::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

const char * AForm::GradeTooHighException::what(void) const throw()
{
	return "Invalid argument: too high grade";
}

const char * AForm::GradeTooLowException::what(void) const throw()
{
	return "Invalid argument: too low grade";
}

char const * AForm::getName(void) const
{
	return this->_name;
}

unsigned int AForm::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

unsigned int AForm::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

bool AForm::getIfSigned(void) const
{
	return this->_isSigned;	
}

void AForm::beSigned(Bureaucrat const & person)
{
	if (person.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	if (person.signForm(*this) == true)
		this->_isSigned = true;
}

std::ostream & operator<<(std::ostream & o, AForm const & src)
{
	if (src.getIfSigned() == true)
		o << src.getName() << " is signed by a bureaucrat with grade " << src.getGradeToSign() << " or higher." << std::endl;
	else
		o << src.getName() << " is not signed." << std::endl;	
	return o;
}

bool AForm::isExecutionAllowed(Bureaucrat const & executor) const
{
	if (this->_isSigned == false)
		throw std::logic_error("The form is not signed");
	else if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	return true;
}
