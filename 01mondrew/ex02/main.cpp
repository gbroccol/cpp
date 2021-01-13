/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:44:54 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/13 23:42:15 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

Zombie	*randomChump(void)
{
	int			num = rand() % 10;
	std::string names[10] = {"Billy", "John", "Sam", "Braian", "Alex", \
							"Jessica", "Mary", "Ashley", "Betty", "Liam"};
	ZombieEvent	heap_event;

	heap_event.setZombieType("heap");
	return (heap_event.newZombie(names[num]));
}

int		main(void)
{
	unsigned int	i = 10;
	Zombie			first("Shaun", "stack");
	Zombie			*second;
	Zombie			third("Chester", "stack");
	Zombie			four("Richard", "stack");
	Zombie			five("Peter", "stack");

	srand((unsigned int)time(0));

	std::cout << "Look, stack zombies are coming!" << std::endl;
	std::cout << "Please enter the number of heap zombies to beat them: ";
	std::cin >> i;
	first.announce();
	third.announce();
	while (i > 0)
	{
		second = randomChump();
		second->announce();
		delete second;
		i--;
	}
	std::cout << "Oh no! Heap zombies are dead!" << std::endl;
	std::cout << "All zombies are dead! Phew..." << std::endl;
	return (0);
}
