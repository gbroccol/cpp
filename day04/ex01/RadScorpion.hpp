/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:17:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:42:01 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <iomanip>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:

	RadScorpion(void);
	RadScorpion( RadScorpion const & ClassToCopy );
	virtual ~RadScorpion(void);

	/* overload */
	RadScorpion			&operator=(RadScorpion const & src);

};

#endif
