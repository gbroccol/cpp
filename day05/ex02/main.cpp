/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:41:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 12:37:02 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	ShrubberyCreationForm formS("forest");
	RobotomyRequestForm formR("Jim");
	PresidentialPardonForm formP("Arthur Dent");

	std::cout << "\x1b[33;1m_________________________Test 1__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat person("Tim", 138);
	
		std::cout << person;
		std::cout << formS;
		person.executeForm(formS);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 2__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat person("Jim", 145);
		Bureaucrat person2("Tim", 138);
	
		std::cout << person;
		std::cout << formS;
		formS.beSigned(person);
		std::cout << std::endl;
		
		std::cout << person2;
		std::cout << formS;
		person2.executeForm(formS);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 3__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat person2("Tim", 137);

		std::cout << person2;
		std::cout << formS;
		formS.beSigned(person2);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 4__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat person2("Tim", 137);

		std::cout << person2;
		std::cout << formS;
		person2.executeForm(formS);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 5__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat Jim("Jim", 72);
		Bureaucrat Tim("Tim", 45);

		std::cout << Jim;
		std::cout << formR;
		formR.beSigned(Jim);
		std::cout << std::endl;

		std::cout << Tim;
		std::cout << formR;
		Tim.executeForm(formR);
		std::cout << std::endl;

		Tim.executeForm(formR);
		std::cout << std::endl;

		Tim.executeForm(formR);
		std::cout << std::endl;

		Tim.executeForm(formR);
		std::cout << std::endl;

		Tim.executeForm(formR);
		std::cout << std::endl;

		Tim.executeForm(formR);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 6__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat Jim("Jim", 25);
		Bureaucrat Tim("Tim", 5);

		std::cout << Jim;
		std::cout << formP;
		formP.beSigned(Jim);
		std::cout << std::endl;

		std::cout << Tim;
		std::cout << formP;
		Tim.executeForm(formP);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
