/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:37:53 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 21:03:30 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// отряд (часть армии)
// ISquad - интерфейс

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:

		int			_UnitsNmb;
	
	public:
		
		Squad(void);
		Squad( Squad const & ClassToCopy );	
		virtual ~Squad(void);
		
		virtual int					getCount(void) const;
		virtual ISpaceMarine		*getUnit(int unit) const;
		virtual int					push(ISpaceMarine *NewUnit);

		/* overload */
		Squad						&operator=(Squad const & src);

};

#endif