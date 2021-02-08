/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:56:12 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/08 15:13:21 by gbroccol         ###   ########.fr       */
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
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast< A *> (&p))
		std::cout << "It is object A" << std::endl;
	else if (dynamic_cast< B *> (&p))
		std::cout << "It is object B" << std::endl;
	else if (dynamic_cast< C *> (&p))
		std::cout << "It is object C" << std::endl;
}

int main()
{
	Base *classBase = generate();
	identify_from_pointer(classBase);
	identify_from_reference(*classBase);
}