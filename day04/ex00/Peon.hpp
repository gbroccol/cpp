/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:55:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:31:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <iomanip>
#include "Victim.hpp"

class Peon : public Victim
{
private:

	Peon(void);

public:
	
	Peon( std::string name);	
	Peon( Peon const & ClassToCopy );
	virtual ~Peon();

	virtual void			getPolymorphed() const;

	/* overload */
	Peon					&operator=(Peon const & src);

};

#endif