/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:48:40 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 19:05:12 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int			 main()
{
	Zombie			*zmb1 = new Zombie;
	ZombieEvent		*zmb_event = new ZombieEvent;
	Zombie			*zmb2 = new Zombie;
	Zombie			zmb3("Chunky", "Chemical");

	zmb1->set_name("Crusty");
	zmb1->set_type("Biological");
	zmb1->announce();
	delete(zmb1);
	zmb_event->setZombieType("Magic");
	zmb2 = zmb_event->newZombie("Brittle Zombie");
	zmb2->announce();
	delete(zmb2);
	zmb_event->setZombieType("Special");
	zmb_event->randomChump();
	zmb3.announce();
	delete (zmb_event);
	return(0);
}
