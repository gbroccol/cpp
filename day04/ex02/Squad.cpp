/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:51:21 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 21:04:56 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	
}

Squad::Squad( Squad const & ClassToCopy )
{
	
}	

Squad::~Squad(void)
{
	
}

/*
** get
*/
int					Squad::getCount() const { return(_UnitsNmb); }

ISpaceMarine		*Squad::getUnit(int unit) const
{
	// getUnit(N) returns a pointer to the Nth unit (Of course, we start at 0. Null
	// pointer in case of out-of-bounds index.)
}

int					Squad::push(ISpaceMarine *NewUnit)
{
	if (NewUnit != NULL)
	{
		// push(XXX) adds the XXX unit to the end of the squad. Returns the number of
		// units in the squad after the operation (Adding a null unit, or an unit already in the
		// squad, make no sense at all, of course...)
		_UnitsNmb++;
	}
	
}

/*
** overload
*/

Squad				&Squad::operator=(Squad const & src)
{
	
}
