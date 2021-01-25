/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:58:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 19:52:55 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) // name // AP cost // Damage
{
	
}

PowerFist::PowerFist( PowerFist const & ClassToCopy ) : AWeapon(ClassToCopy.getName(), ClassToCopy.getAPCost(), ClassToCopy.getDamage())
{
	// *this = ClassToCopy;
	return ;
}

PowerFist::~PowerFist()
{
	
}

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
