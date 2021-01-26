/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:29:56 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:41:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & ClassToCopy ) : Enemy( ClassToCopy ) {}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void			SuperMutant::takeDamage(int damage)
{
	int			armor = 3;
	Enemy::takeDamage(damage - armor);
}

/*
**	overload
*/

SuperMutant			&SuperMutant::operator=(SuperMutant const &src)
{
	Enemy::operator=(src);
	return *this;
}
