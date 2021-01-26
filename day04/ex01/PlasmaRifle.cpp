/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:46:34 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:47:40 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & ClassToCopy ) : AWeapon( ClassToCopy ) {}

PlasmaRifle::~PlasmaRifle() {}

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