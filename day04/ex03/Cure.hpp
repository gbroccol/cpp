/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:46 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 19:02:08 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:

		Cure( void );
		Cure( std::string const & type );
		Cure( Cure const & ClassToCopy );
		~Cure(void);
		
		/* get */
		std::string const 					& getType(void) const;
		unsigned int						getXP(void) const;

		/* set */
		void 								setType(std::string type);
		void								setXP(unsigned int xp);
		
		virtual Cure							*clone(void) const;
		virtual void						use(ICharacter &target);

		/* overload */
		Cure									&operator=(Cure const & src);

};

#endif