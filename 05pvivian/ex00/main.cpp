/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:28:51 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 19:35:32 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat marvin("Marvin", 1);
	Bureaucrat arthur("Arthur", 150);
	
	try
	{
		std::cout << marvin;
		marvin.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		std::cout << arthur;
		arthur.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}
	
	try
	{
		std::cout << marvin;
		marvin.decrementGrade();
		std::cout << marvin << std::endl;
		
		std::cout << arthur;
		arthur.incrementGrade();
		std::cout << arthur;
		std::cout << "*********" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat person3("jim", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "*********" << std::endl;
	}

	try
	{
		Bureaucrat person3("jim", 200);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
