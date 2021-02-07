/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:14:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/07 18:54:38 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
	srand((unsigned) time(0));
	int result = 1 + (rand() % 3);

	switch (result)
	{
		case 1:
			std::cout << "You created object A" << std::endl;
			return new A;

		case 2:
			std::cout << "You created object B" << std::endl;
			return new B;

		case 3:
			std::cout << "You created object C" << std::endl;
			return new C;
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
