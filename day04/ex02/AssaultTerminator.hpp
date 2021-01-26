/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:46:17 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 20:25:08 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <iomanip>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
		
		std::string			_ColorStart;
		std::string			_ColorFinish;
		
	public:

		AssaultTerminator(void);
		AssaultTerminator( AssaultTerminator const & ClassToCopy );

		virtual ~AssaultTerminator(void);
		
		/* get */
		std::string						getColorStart(void) const;
		std::string						getColorFinish(void) const;

		/* set */
		void							setColorStart(std::string value);
		void							setColorFinish(std::string value);

		virtual AssaultTerminator		*clone(void) const;
		virtual void					battleCry(void) const;
		virtual void					rangedAttack(void) const;
		virtual void 					meleeAttack(void) const;

		/* overload */
		AssaultTerminator			&operator=(AssaultTerminator const & src);
};

#endif
