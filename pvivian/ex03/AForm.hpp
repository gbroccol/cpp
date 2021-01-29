/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:09:14 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 19:43:35 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
class AForm;
# include "Bureaucrat.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class AForm
{
private:
	char const*			_name;
	unsigned int const	_gradeToSign;
	unsigned int const	_gradeToExecute;
	bool				_isSigned;
	AForm(void);
	
public:
	AForm(char const * name, int _gradeToSign, int _gradeToExecute);
	AForm(AForm const & AForm);
	virtual ~AForm(void);
	AForm & operator=(AForm const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		virtual ~GradeTooHighException(void) throw();
		virtual const char* what(void) const throw(); 
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		virtual ~GradeTooLowException(void)throw();
		virtual const char* what(void) const throw(); 
	};

	char const* getName(void) const;
	unsigned int getGradeToSign(void) const;
	unsigned int getGradeToExecute(void) const;
	bool getIfSigned(void) const;

	void beSigned(Bureaucrat const & person);
	virtual void execute(Bureaucrat const & executor) const = 0;
	bool isExecutionAllowed(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & o, AForm const & src);

#endif
