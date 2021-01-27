/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:50 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 19:03:21 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		
	public:

		Ice( void );
		Ice( std::string const & type );
		Ice( Ice const & ClassToCopy );
		~Ice(void);

		virtual Ice							*clone(void) const;
		virtual void						use(ICharacter &target);

		/* overload */
		Ice									&operator=(Ice const & src);

};

#endif
