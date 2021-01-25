/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:23:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 21:03:35 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <iostream>
#include <iomanip>
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		
		// virtual ISquad(void);
		// ISquad( ISquad const & ClassToCopy );	
		virtual ~ISquad(void);
		
		virtual int					getCount(void) const = 0;
		virtual ISpaceMarine		*getUnit(int unit) const = 0;
		virtual int					push(ISpaceMarine *NewUnit) = 0;

		/* overload */
		// ISquad			&operator=(ISquad const & src);

};

#endif