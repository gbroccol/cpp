/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:28:51 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 22:38:54 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat marvin("Marvin", 11);
	
	try
	{
		Form form("Doc", 200, 200);
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		Form form("Doc", 0, 0);
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	
	try
	{
		Form form("Doc", 10, 9);

		std::cout << form;
		form.beSigned(marvin);
		std::cout << form;
		std::cout << "*********" << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		Form form("Doc", 10, 9);
	
		std::cout << form;
		marvin.incrementGrade();
		marvin.incrementGrade();
		form.beSigned(marvin);
		std::cout << form;
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		Form form("Doc", 10, 9);

		std::cout << form;
		marvin.decrementGrade();
		form.beSigned(marvin);
		std::cout << form;
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	return 0;
}
