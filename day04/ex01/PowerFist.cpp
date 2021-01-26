/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:58:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:49:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist( PowerFist const & ClassToCopy ) : AWeapon( ClassToCopy ) {}

PowerFist::~PowerFist() {}

/*
** attack
*/
void					PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** operator
*/
PowerFist				& PowerFist::operator=(PowerFist const & src)
{
	AWeapon::operator=(src);
	return *this;
}
