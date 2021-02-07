/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:54:53 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/07 12:06:11 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"


void identify_from_pointer(Base *p)
{
	A *childA = dynamic_cast<A*>(p);
	if(childA)
	{
		std::cout << "pointer: Class \"A\" " <<std::endl;
	}
	B *childB = dynamic_cast<B*>(p);
	if(childB)
	{
		std::cout << "pointer: Class \"B\" " <<std::endl;
	}
	C *childC = dynamic_cast<C*>(p);
	if(childC)
	{
		std::cout << "pointer: Class \"C\" " <<std::endl;
	}
}

void identify_from_reference (Base &p)
{
	if(dynamic_cast<A*>(&p))
	{
		std::cout << "reference: Class \"A\" " <<std::endl;
	}
	if(dynamic_cast<B*>(&p))
	{
		std::cout << "reference: Class \"B\" " <<std::endl;
	}
	if(dynamic_cast<C*>(&p))
	{
		std::cout << "reference: Class \"C\" " <<std::endl;
	}
}

Base *generate (void)
{
	srand(time(NULL));
	int random = rand() % 3;
	if(random == 0)
	{
		std::cout <<"C"<<std::endl;
		C *returnValue;
		returnValue = new C;
		return (returnValue);
	}
	if(random == 1)
	{
		std::cout <<"B"<<std::endl;
		B *returnValue;
		returnValue = new B;
		return (returnValue);
	}
	if(random == 2)
	{
		std::cout <<"A"<<std::endl;
		A *returnValue;
		returnValue = new A;
		return (returnValue);
	}
	std::cout <<"NULL"<<std::endl;
	return NULL;
}


int main()
{
	Base *a;
	a =  generate();
	identify_from_pointer(a);
	identify_from_reference (*a);
}