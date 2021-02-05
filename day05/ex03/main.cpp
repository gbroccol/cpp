/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:02:33 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 15:02:47 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\x1b[33;1m_________________________Shrubbery Creation Form__________________________\x1b[0m" << std::endl;

	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("shrubbery creation", "Vogsphere");
		std::cout << "\x1b[32m" << *form << "\x1b[0m" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Robotomy Request Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("robotomy request", "Hitchhikers");
		std::cout << "\x1b[32m" << *form << "\x1b[0m" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Presidential Pardon Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("presidential pardon", "Fandom");
		std::cout << "\x1b[32m" << *form << "\x1b[0m" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Unknown Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("unknown form", "Other");
		std::cout << "\x1b[32m" << *form << "\x1b[0m" << std::endl;
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();
	return 0;
}
