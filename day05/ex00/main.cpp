/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:11:23 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 13:25:43 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\x1b[33;1m_________________________Test 1__________________________\x1b[0m" << std::endl;
	try
	{
		std::string name = "Marvin";
		Bureaucrat marvin(name, -1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::string name = "Marvin";
		Bureaucrat marvin(name, 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::string name = "Marvin";
		Bureaucrat marvin(name, 1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::string name = "Marvin";
		Bureaucrat marvin(name, 150);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::string name = "Marvin";
		Bureaucrat marvin(name, 151);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();
	
	std::cout << "\x1b[33;1m_________________________Test 2__________________________\x1b[0m" << std::endl;
	std::string name = "Marvin";
	Bureaucrat marvin(name, 1);
	
	try
	{
		std::cout << marvin;
		marvin.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 3__________________________\x1b[0m" << std::endl;
	
	std::string name2 = "Arthur";
	Bureaucrat arthur(name2, 150);
	try
	{
		std::cout << arthur;
		arthur.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 4__________________________\x1b[0m" << std::endl;
	
	try
	{
		std::cout << marvin;
		marvin.decrementGrade();
		std::cout << marvin << std::endl;
		
		std::cout << arthur;
		arthur.incrementGrade();
		std::cout << arthur;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 5__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat *testNull = nullptr;
		testNull->getGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		testNull->getName();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		testNull->decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		testNull->incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		*testNull = marvin;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		marvin = *testNull;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *testNull = nullptr;
		Bureaucrat CopyTestNull(*testNull);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat CopyMarvin(marvin);
		std::cout << marvin;
		std::cout << CopyMarvin;
		CopyMarvin.incrementGrade();
		std::cout << CopyMarvin;
		CopyMarvin.incrementGrade();
		std::cout << CopyMarvin;
		CopyMarvin.incrementGrade();
		std::cout << CopyMarvin;
		CopyMarvin.decrementGrade();
		std::cout << CopyMarvin;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
