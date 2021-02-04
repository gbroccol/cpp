/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:41:01 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/04 17:31:14 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\x1b[33;1m_________________________Test 1__________________________\x1b[0m" << std::endl;
	try
	{
		Form form("Doc", 200, 200);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form form("Doc", 0, 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();
	
	std::cout << "\x1b[33;1m_________________________Test 2__________________________\x1b[0m" << std::endl;
	try
	{
		Form form("Doc", 150, 150);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form form("Doc", 1, 1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();
	
	std::cout << "\x1b[33;1m_________________________Test 3__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat marvin("Marvin", 11);
		Form form("Doc", 10, 9);

		std::cout << form;
		std::cout << marvin;
		form.beSigned(marvin);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 4__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat marvin("Marvin", 10);
		Form form("Doc", 10, 9);
	
		std::cout << form;
		std::cout << marvin << std::endl;
		
		form.beSigned(marvin);
		std::cout << form  << std::endl;
		
		form.beSigned(marvin);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 5__________________________\x1b[0m" << std::endl;
	try
	{
		Bureaucrat marvin("Marvin", 9);
		Form form("Doc", 10, 9);

		std::cout << form;
		std::cout << marvin << std::endl;
		
		form.beSigned(marvin);
		std::cout << form;
	
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 6__________________________\x1b[0m" << std::endl;	
	try
	{
		Form *TestForm = nullptr;
		TestForm->getName();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form *TestForm = nullptr;
		TestForm->getValue();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form *TestForm = nullptr;
		TestForm->getSignGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form *TestForm = nullptr;
		TestForm->getExecuteGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Test 7__________________________\x1b[0m" << std::endl;	
	try
	{
		Bureaucrat marvin("Marvin", 1);
		Form TestForm("TestForm", 42, 42);
		Form CopyForm("CopyForm", 21, 21);
		Form CopyFormExtra(CopyForm);

		std::cout << TestForm;
		std::cout << CopyForm;
		std::cout << CopyFormExtra << std::endl;
		
		TestForm.beSigned(marvin);
		std::cout << std::endl;
		
		CopyForm = TestForm;
		std::cout << TestForm;
		std::cout << CopyForm;
		std::cout << CopyFormExtra << std::endl;
	
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
