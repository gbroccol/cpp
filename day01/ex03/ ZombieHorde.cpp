/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ZombieHorde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:24:33 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 20:37:02 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->nmb = n;
	int				nmb;
	std::string		names[10] = {"Grower", "Brittle Zombie", "Crusty", \
								"Clamper", "Stumbler", "Chunky", "Forager", \
								"Little Zombie", "Bloater", "Follower"};
	this->zmb = new Zombie[n];
	if (!this->zmb)
		std::cout << "Could not allocate memory";
	
	int i = 0;
	while (i < n) 
	{
		nmb = rand() % 10;
		this->zmb[i].setName(names[nmb]);
		this->zmb[i].setType("Magic");
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	int		i = 0;
	while (i < this->nmb)
	{
		std::cout << "\x1b[31m";
		std::cout << "\t\t\t\t\t\tZombie " << this->zmb[i].getName() << " is killed, phew!!!" << std::endl;
		std::cout << "\x1b[0m";
		i++;
	}
	delete[] this->zmb;
	return ;
}

void		ZombieHorde::announce(void)
{
	int		i = 0;
	while (i < this->nmb)
	{
		this->zmb[i].announce();
		i++;
	}
	return ;
}
