/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:30 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 20:36:25 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <iomanip>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:

		std::string				_Type;
		unsigned int			_XP;
		AMateria( void ); // move to private
		
	public:
	
		AMateria( std::string const & type );
		AMateria( AMateria const & ClassToCopy );
		virtual ~AMateria(void);
		
		/* get */
		std::string const 					& getType(void) const;
		unsigned int						getXP(void) const;

		/* set */
		void 								setType(std::string type);
		void								setXP(unsigned int xp);
		
		virtual AMateria					*clone(void) const = 0;
		virtual void						use(ICharacter &target);

		/* overload */
		AMateria							&operator=(AMateria const & src);
		
};

#endif