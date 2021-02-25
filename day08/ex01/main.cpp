/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:21:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 16:25:21 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	system("clear");
	std::cout << "\x1b[33;1m_________________________ Test 1 ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	getchar();
	system("clear");

	std::cout << "\x1b[33;1m_________________________ Test 2 - shortestSpan ________________________________\x1b[0m" << std::endl;
	
	try
	{
		Span sp = Span(0);
		
		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\x1b[33;1m_________________________ Test 3 - longestSpan ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(0);
		
		sp.addNumber(5);

		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ Test 4 - shortestSpan ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(1);
		
		sp.addNumber(5);
		std::cout << "Value * " << sp.getValue(0) << " * " << std::endl;
		sp.addNumber(6);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\x1b[33;1m_________________________ Test 5 - longestSpan ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(1);
		
		sp.addNumber(5);
		std::cout << "Value * " << sp.getValue(0) << " * " << std::endl;
		sp.addNumber(6);

		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ Test 6 ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(20000);
		for(int i = 0; i < 20000; i++)
			sp.addNumber(i);
			
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	getchar();
	system("clear");

	std::cout << "\x1b[33;1m_________________________ Test 7 ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(5);
	
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		// std::cout << "Value * " << sp.getValue(-1) << " * " << std::endl;
		std::cout << "Value * " << sp.getValue(0) << "  * " << std::endl;
		std::cout << "Value * " << sp.getValue(1) << "  * " << std::endl;
		std::cout << "Value * " << sp.getValue(2) << "  * " << std::endl;
		std::cout << "Value * " << sp.getValue(3) << " * " << std::endl;
		std::cout << "Value * " << sp.getValue(4) << " * " << std::endl;
		// std::cout << "Value * " << sp.getValue(5) << " * " << std::endl;
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	getchar();
	system("clear");

	std::cout << "\x1b[33;1m_________________________ Test 8 - CONSTRUCTOR COPY ________________________________\x1b[0m" << std::endl;
	try
	{
		Span sp = Span(5);
	
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);

		Span spCopy = Span(sp);
		
		sp.addNumber(4);
		spCopy.addNumber(8);

		std::cout << "Value sp * " << sp.getValue(0) << " * " << std::endl;
		std::cout << "Value sp * " << sp.getValue(1) << " * " << std::endl;
		std::cout << "Value sp * " << sp.getValue(2) << " * " << std::endl;
		std::cout << "Value sp * " << sp.getValue(3) << " * " << std::endl;
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		getchar();
		
		std::cout << "Value spCopy * " << spCopy.getValue(0) << " * " << std::endl;
		std::cout << "Value spCopy * " << spCopy.getValue(1) << " * " << std::endl;
		std::cout << "Value spCopy * " << spCopy.getValue(2) << " * " << std::endl;
		std::cout << "Value spCopy * " << spCopy.getValue(3) << " * " << std::endl;
		std::cout << spCopy.shortestSpan() << std::endl;
		std::cout << spCopy.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// int main()
// {
// 	Span sp = Span(5);
	
// 	sp.addNumber(5);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
	
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// }