/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:09:14 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 19:37:47 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
class Form;
# include "Bureaucrat.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Form
{
private:
	char const*			_name;
	unsigned int const	_gradeToSign;
	unsigned int const	_gradeToExecute;
	bool				_isSigned;
	Form(void);
	
public:
	Form(char const * name, int _gradeToSign, int _gradeToExecute);
	Form(Form const & form);
	~Form(void);
	Form & operator=(Form const & form);

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
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
