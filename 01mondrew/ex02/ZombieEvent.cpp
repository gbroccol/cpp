/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:30:32 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 22:58:46 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>

ZombieEvent::ZombieEvent(void) : _type("none") {

	return ;
}

ZombieEvent::~ZombieEvent(void) {

	return ;
}

void	ZombieEvent::setZombieType(std::string a_type) {

	this->_type = a_type;

	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name) {

	Zombie	*bob = new Zombie(name, this->_type);

	return (bob);
}
