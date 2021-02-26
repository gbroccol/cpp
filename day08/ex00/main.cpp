/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:07:53 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/26 12:50:49 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <array>

int main()
{
	std::cout << "\x1b[33;1m_________________________ Test 1 - empty list __________________________\x1b[0m" << std::endl;

	std::list <int> whereFind;

	try
	{
		std::list <int>::iterator thisList = easyfind(whereFind, 21);
		std::cout << *thisList << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________ Test 2 - list ________________________________\x1b[0m" << std::endl;
	
	for (int i = 0; i < 50; i++)
		whereFind.push_back(i);

	try
	{
		std::list <int>::iterator thisList = easyfind(whereFind, 42);
		std::cout << *thisList << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________ Test 3 - vector ______________________________\x1b[0m" << std::endl;

	std::vector <int> whereFindVector;
	for (int j = 50; j <= 100; j++)
		whereFindVector.push_back(j);
	
	try
	{
		std::vector <int>::iterator thisVector = easyfind(whereFindVector, 50);
		std::cout << *thisVector << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________ Test 3 - array ______________________________\x1b[0m" << std::endl;

	std::array<int, 4> a = {0, 42, 21, -100};

	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, -1);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, 0);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, 42);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, 21);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, -100);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::array <int, 4>::iterator thisArray = easyfind(a, -101);
		std::cout << *thisArray << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();
	
}
