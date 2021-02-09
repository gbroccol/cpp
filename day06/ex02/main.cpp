/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:56:12 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/09 14:20:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "Base.hpp"

Base * generate(void)
{
	Base *result;

	srand((unsigned) time(0));
	int i = 1 + (rand() % 3);

	switch (i)
	{
		case 1:
		{
			std::cout << "You created object A" << std::endl;
			A *a = new A;
			result = a;
			return result;
		}
		case 2:
		{
			std::cout << "You created object B" << std::endl;
			B *b = new B;
			result = b;
			return result;
		}
		case 3:
		{
			std::cout << "You created object C" << std::endl;
			C *c = new C;
			result = c;
			return result;
		}
	}
	return  (NULL);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast< A *> (p))
		std::cout << "It is object A" << std::endl;
	else if (dynamic_cast< B *> (p))
		std::cout << "It is object B" << std::endl;
	else if (dynamic_cast< C *> (p))
		std::cout << "It is object C" << std::endl;
	else
		std::cout << "NO MATCH" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (&p == nullptr)
	{
		std::cout << "NO MATCH" << std::endl;
		return ;
	}

	try
	{
		A a = dynamic_cast< A &> (p);
		std::cout << "It is object " << a.getType() << std::endl;
	}
	catch (const std::exception & e)
	{
	}
	try
	{
		B b = dynamic_cast< B &> (p);
		std::cout << "It is object " << b.getType() << std::endl;
	}
	catch (const std::exception & e)
	{
	}
	try
	{
		C c = dynamic_cast< C &> (p);
		std::cout << "It is object " << c.getType() << std::endl;
	}
	catch (const std::exception & e)
	{
	}
}

int main()
{
	std::cout << "\x1b[32m" << std::endl;
	
	Base *classBase = generate();
	identify_from_pointer(classBase);
	identify_from_reference(*classBase);
	std::cout << std::endl;

	Base *classBase2 = NULL;
	identify_from_pointer(classBase2);
	identify_from_reference(*classBase2);
	std::cout << std::endl;
	
	Base *classBase3 = nullptr;
	identify_from_pointer(classBase3);
	identify_from_reference(*classBase3);
	std::cout << "\x1b[0m" << std::endl;
}