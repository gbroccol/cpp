/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:41:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/04 19:43:16 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	// std::string input;
	ShrubberyCreationForm formS("forest");
	// RobotomyRequestForm formR("Jim");
	// PresidentialPardonForm formP("Arthur Dent");

	// Bureaucrat person3("Jim", 72);
	// Bureaucrat person4("Tim", 45);

	// Bureaucrat person5("Jim", 25);
	// Bureaucrat person6("Tim", 5);

	std::cout << "\x1b[33;1m_________________________Test 1__________________________\x1b[0m" << std::endl;
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

	std::cout << "\x1b[33;1m_________________________Test 2__________________________\x1b[0m" << std::endl;
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
	
	// ROBOTOMY TEST
	// try
	// {
	// 	std::cout << formR;
	// 	formR.beSigned(person3);
	// 	std::cout << formR;
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << std::endl;
	// 	person4.executeForm(formR);
	// 	std::cout << "*********" << std::endl;
	// 	std::getline(std::cin, input);
	// 	std::system("clear");
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	std::cout << "*********" << std::endl;
	// }

	// PRESIDENTIAL PARDON TEST
	// try
	// {
	// 	std::cout << formP;
	// 	formP.beSigned(person5);
	// 	std::cout << formP;
	// 	std::cout << std::endl;
	// 	person6.executeForm(formP);
	// 	std::cout << "*********" << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	std::cout << "*********" << std::endl;
	// }
	
	return 0;
}



// int main(){
// 	RobotomyRequestForm	r("foo");
// 	PresidentialPardonForm p;
// 	ShrubberyCreationForm s;
// 	Bureaucrat	b;
// 	b.setGrade(60);
// 	b.executeForm(r);
// 	b.executeForm(p);
// 	b.executeForm(s);
// 	b.signForm(p);
// 	b.signForm(r);
// 	b.signForm(s);
// 	p.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	s.execute(b);
// 	b.setGrade(1);
// 	b.signForm(p);
// 	b.signForm(r);
// 	b.signForm(s);
// 	p.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	r.execute(b);
// 	s.execute(b);

// 	b.executeForm(r);
// 	b.executeForm(p);
// 	b.executeForm(s);
// 	return 0;
// }