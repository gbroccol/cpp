/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:39:34 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 20:22:17 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// тактический космодесантник (часть армии)
// ISpaceMarine - интерфейс

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include <iomanip>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
		
		std::string			_ColorStart;
		std::string			_ColorFinish;
		
	public:

		TacticalMarine(void);
		TacticalMarine( TacticalMarine const & ClassToCopy );

		virtual ~TacticalMarine(void);
		
		// virtual TacticalMarine		*clone(void) const;
		virtual void				battleCry(void) const;
		virtual void				rangedAttack(void) const;
		virtual void 				meleeAttack(void) const;

		/* overload */
		// TacticalMarine			&operator=(TacticalMarine const & src);
};

#endif