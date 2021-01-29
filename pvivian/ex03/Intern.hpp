/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:53:32 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/13 13:44:08 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	AForm * makeShrubberyForm(std::string const & target);
	AForm * makeRobotomyForm(std::string const & target);
	AForm * makePresidentialForm(std::string const & target);

public:
	Intern(void);
	Intern(Intern const & person);
	~Intern(void);
	Intern & operator=(Intern const & person);

	AForm * makeForm(std::string const & formType, std::string const & target);
};

#endif
