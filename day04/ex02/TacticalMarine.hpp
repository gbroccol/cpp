/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:39:34 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 21:11:39 by gbroccol         ###   ########.fr       */
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
		
	public:

		TacticalMarine(void);

		virtual ~TacticalMarine();
		virtual TacticalMarine		*clone() const = 0;
		virtual void				battleCry() const = 0;
		virtual void				rangedAttack() const = 0;
		virtual void 				meleeAttack() const = 0;
};

#endif