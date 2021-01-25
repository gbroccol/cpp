/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:29:54 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 18:28:57 by gbroccol         ###   ########.fr       */
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
	SuperMutant( SuperMutant const & ClassToCopy );					// CONONICAL FORM
	virtual ~SuperMutant();												// CONONICAL FORM

	virtual void			takeDamage(int);

	/* overload */
	SuperMutant				&operator=(SuperMutant const & src);		// CONONICAL FORM

};

#endif