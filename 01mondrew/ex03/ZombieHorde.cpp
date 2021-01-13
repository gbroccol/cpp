/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 00:11:54 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/14 00:48:16 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int a_N) : _N(a_N) {

	this->_horde = new Zombie[_N];

	return ;
}

ZombieHorde::~ZombieHorde(void) {

	delete [] this->_horde;

	return ;
}

int		ZombieHorde::getNumber(void) {

	return (this->_N);
}

Zombie	*ZombieHorde::getArray(void) {

	return (this->_horde);
}

void	ZombieHorde::announce(void) {

	int		i = 0;
	int		N = this->getNumber();
	Zombie	*ptr;

	ptr = getArray();
	while (i < N)
	{
		ptr[i].announce();
		i++;
	}

	return ;
}
