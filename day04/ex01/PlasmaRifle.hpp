/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:46:37 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:48:38 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	
	PlasmaRifle(void);
	PlasmaRifle( PlasmaRifle const & ClassToCopy );
	virtual ~PlasmaRifle(void);

	virtual void		attack(void) const;

	/* overload */
	PlasmaRifle			&operator=(PlasmaRifle const & src);

};

#endif
