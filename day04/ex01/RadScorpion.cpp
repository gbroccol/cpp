/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:16:59 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:41:52 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & ClassToCopy ) : Enemy( ClassToCopy ) {}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
**	overload
*/

RadScorpion			&RadScorpion::operator=(RadScorpion const &src)
{
	Enemy::operator=(src);
	return *this;
}
