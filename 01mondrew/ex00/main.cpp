/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:19:23 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/13 17:02:28 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

void	ponyOnTheStack(std::string name, std::string color)
{
	Pony	stack_pony = Pony(name, color);

	std::cout << "A little cute pony " << stack_pony.getName() 
							<< " was born on the stack." << std::endl;
	stack_pony.sing();
	stack_pony.eat_rainbow();
	stack_pony.sleep();
	std::cout << stack_pony.getName() << ": \"I have to go! Bye-bye!\"" << std::endl;
}

void	ponyOnTheHeap(std::string name, std::string color)
{
	Pony	*heap_pony = new Pony(name, color);

	std::cout << "A little cute pony " << heap_pony->getName() 
							<< " was born on the heap." << std::endl;
	heap_pony->sing();
	heap_pony->eat_rainbow();
	heap_pony->sleep();
	std::cout << heap_pony->getName() << ": \"I have to go! Bye-bye!\"" << std::endl;
	delete heap_pony;
}

int		main(void)
{
	std::cout << "Once upon a time..." << std::endl;
	ponyOnTheHeap("Pinky Pie", "pink");
	ponyOnTheStack("Fluttershy", "yellow");
	std::cout << "All ponies has been disappeared. Let it go." << std::endl;
	return (0);
}
