/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:28:13 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/12 20:03:46 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string color, std::string breed)
{
	Pony	*pony_heap = new Pony(color, breed);
	
	std::cout << "New " << pony_heap->getColor() << " pony is " << pony_heap->getBreed() << std::endl;
	std::cout << "Good bye! I have to go to the stable!" << std::endl;
	delete pony_heap;
}

void	ponyOnTheStack(std::string color, std::string breed)
{
	Pony	pony_stk = Pony(color, breed);
	
	std::cout << "New " << pony_stk.getColor() << " pony is " << pony_stk.getBreed() << std::endl;
	std::cout << "Good bye! I have to go to the stable!" << std::endl;
}

int main()
{
	std::cout << "Start  programm" << std::endl;
	ponyOnTheHeap("pink", "Altai");
	ponyOnTheStack("black", "Albino");
	std::cout << "Finish programm" << std::endl;
	return (0);
}
