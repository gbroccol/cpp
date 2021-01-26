/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:29:54 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:40:58 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <iomanip>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:

	SuperMutant(void);
	SuperMutant( SuperMutant const & ClassToCopy );
	virtual ~SuperMutant();

	virtual void			takeDamage(int);

	/* overload */
	SuperMutant				&operator=(SuperMutant const & src);

};

#endif