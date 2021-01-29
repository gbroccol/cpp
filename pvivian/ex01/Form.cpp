/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:22:04 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 19:44:12 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _gradeToSign(HIGHEST_GRADE), _gradeToExecute(LOWEST_GRADE)
{
	this->_name = "Form";
	this->_isSigned = false;	
	return;
}

Form::Form(char const * name, int toSign, int toExecute) : _gradeToSign(toSign), _gradeToExecute(toExecute)
{
	if (this->_gradeToSign > LOWEST_GRADE || this->_gradeToExecute > LOWEST_GRADE)
		throw GradeTooLowException();
	else if (this->_gradeToSign < HIGHEST_GRADE || this->_gradeToExecute < HIGHEST_GRADE)
		throw GradeTooHighException();
	this->_name = name;
	this->_isSigned = false;
	return;
}

Form::Form(Form const & person) : _name(person.getName()), _gradeToSign(person.getGradeToSign()),
								_gradeToExecute(person.getGradeToExecute()), _isSigned(person.getIfSigned())
{
	return;
}

Form::~Form(void)
{
	return;
}

Form & Form::operator=(Form const & form)
{
	if (this != &form)
		this->_isSigned = form.getIfSigned();
	return *this;
}

Form::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
	return "Invalid argument: too high grade";
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return "Invalid argument: too low grade";
}

char const * Form::getName(void) const
{
	return this->_name;
}

unsigned int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

unsigned int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

bool Form::getIfSigned(void) const
{
	return this->_isSigned;	
}

void Form::beSigned(Bureaucrat const & person)
{
	if (person.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	if (person.signForm(*this) == true)
		this->_isSigned = true;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	if (src.getIfSigned() == true)
		o << src.getName() << " is signed by a bureaucrat with grade " << src.getGradeToSign() << " or higher." << std::endl;
	else
		o << src.getName() << " is not signed." << std::endl;	
	return o;
}
