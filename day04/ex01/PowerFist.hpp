/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:58:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:49:34 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <iomanip>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	
	PowerFist(void);
	PowerFist( PowerFist const & ClassToCopy );	
	virtual ~PowerFist();

	virtual void		attack() const;

	/* overload */
	PowerFist			&operator=(PowerFist const & src);

};

#endif
