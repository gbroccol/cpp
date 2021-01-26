/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:36:23 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:36:36 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLAVE_HPP
#define SLAVE_HPP

#include <iostream>
#include <iomanip>
#include "Victim.hpp"

class Slave : public Victim
{
private:

	Slave(void);

public:
	
	Slave( std::string name);	
	Slave( Slave const & ClassToCopy );
	virtual ~Slave();

	virtual void			getPolymorphed() const;

	/* overload */
	Slave					&operator=(Slave const & src);

};

#endif
