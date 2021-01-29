/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:28:51 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 22:38:21 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	std::string input;
	ShrubberyCreationForm formS("forest");
	RobotomyRequestForm formR("Jim");
	PresidentialPardonForm formP("Arthur Dent");

	Bureaucrat person("Jim", 145);
	Bureaucrat person2("Tim", 138);

	Bureaucrat person3("Jim", 72);
	Bureaucrat person4("Tim", 45);

	Bureaucrat person5("Jim", 25);
	Bureaucrat person6("Tim", 5);

	// SHRUBBERY TEST + low grade for execution
	try
	{
		std::system("clear");
		std::cout << formS;
		formS.beSigned(person);
		std::cout << std::endl;
		std::cout << formS;
		person2.executeForm(formS);
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		person2.incrementGrade();
		std::cout << formS;
		person2.executeForm(formS);
		std::cout << "*********" << std::endl;
		std::getline(std::cin, input);
		std::system("clear");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	
	// ROBOTOMY TEST
	try
	{
		std::cout << formR;
		formR.beSigned(person3);
		std::cout << formR;
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << std::endl;
		person4.executeForm(formR);
		std::cout << "*********" << std::endl;
		std::getline(std::cin, input);
		std::system("clear");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	// PRESIDENTIAL PARDON TEST
	try
	{
		std::cout << formP;
		formP.beSigned(person5);
		std::cout << formP;
		std::cout << std::endl;
		person6.executeForm(formP);
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	
	return 0;
}
