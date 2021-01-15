/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:19:07 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 19:15:51 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie* 	ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie = new Zombie(name, this->type);

	return (new_zombie);
}

void		ZombieEvent::randomChump(void)
{
	int				nmb;
	std::string		names[10] = {"Grower", "Brittle Zombie", "Crusty", \
								"Clamper", "Stumbler", "Chunky", "Forager", \
								"Little Zombie", "Bloater", "Follower"};
	Zombie			*zmb;
	int i = 0;
	while (i < 9) 
	{
		nmb = rand() % 10;
		zmb = this->newZombie(names[nmb]);
		zmb->announce();
		delete(zmb);
		i++;
	}
	return ;
} 


	

