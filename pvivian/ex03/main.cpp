/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:28:51 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/13 13:56:29 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main(void)
{
	std::string input;
	Intern intern;

	try
	{
		AForm * form = intern.makeForm("shrubbery creation", "vogsphere");
		std::cout << form->getName() << " created." << std::endl;
		std::cout << "*********" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		AForm * form = intern.makeForm("robotomy request", "Arthur Dent");
		std::cout << form->getName() << " created." << std::endl;
		std::cout << "*********" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	
	try
	{
		AForm * form  = intern.makeForm("presidential pardon", "Ford Prefect");
		std::cout << form->getName() << " created." << std::endl;
		std::cout << "*********" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		AForm * form  = intern.makeForm("happiness decree", "Trillian");
		std::cout << form->getName() << " created." << std::endl;
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	return 0;
}
