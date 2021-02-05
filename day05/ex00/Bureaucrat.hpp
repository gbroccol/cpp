/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:36:39 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 13:15:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Bureaucrat
{
	public:
	
		Bureaucrat( std::string &name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat(void);

		Bureaucrat &		operator=( Bureaucrat const & rhs );


		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* 	what(void) const throw(); 
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* 	what(void) const throw(); 
		};

		class NullException : public std::exception
		{
			public:
				virtual const char* 	what(void) const throw(); 
		};

		/* get */
		std::string		 				getName(void) const;
		int								getGrade(void) const;

		void							incrementGrade(void);
		void							decrementGrade(void);

	private:

		std::string	const		_Name;
		int						_Grade;
		Bureaucrat(void);

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */