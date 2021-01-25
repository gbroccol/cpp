/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:46:34 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 19:52:40 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) // name // AP cost // Damage
{
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & ClassToCopy ) : AWeapon(ClassToCopy.getName(), ClassToCopy.getAPCost(), ClassToCopy.getDamage())
{
	// *this = ClassToCopy;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	
}

/*
** attack
*/
void					PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** operator
*/
PlasmaRifle				& PlasmaRifle::operator=(PlasmaRifle const & src)
{
	AWeapon::operator=(src);
	return *this;
}