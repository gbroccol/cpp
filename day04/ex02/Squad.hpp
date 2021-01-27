/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:37:53 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 12:58:53 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// отряд (часть армии)
// ISquad - интерфейс

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

class Squad : public ISquad
{
	private:

		int					_UnitsNmb;
		ISpaceMarine**		_Squad;								// check *
		
		std::string			_ColorStart;
		std::string			_ColorFinish;

		void				removeSquad(void);
		ISpaceMarine**		copySquad(void) const;
	
	public:
		
		Squad(void);
		Squad( Squad const & ClassToCopy );	
		virtual ~Squad(void);
		
		/* get */
		virtual int					getCount(void) const;
		virtual ISpaceMarine		*getUnit(int unit) const;
		std::string					getColorStart(void) const;
		std::string					getColorFinish(void) const;
		
		virtual int					push(ISpaceMarine *NewUnit);
	
		/* overload */
		Squad						&operator=(Squad const & src);

};


#endif
