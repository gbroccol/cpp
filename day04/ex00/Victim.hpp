/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:32:32 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 12:33:42 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <iomanip>

class Victim
{
private:
	
	Victim(void);											// CONONICAL FORM
	
protected:

	std::string			_name;

public:
	
	Victim(std::string name);
	Victim( Victim const & ClassToCopy );					// CONONICAL FORM
	virtual ~Victim();										// CONONICAL FORM

	/* get */
	std::string			getName() const;

	/* polymorphed */
	virtual void		getPolymorphed() const;

	/* overload */
	Victim				&operator=(Victim const & src);		// CONONICAL FORM

};

std::ostream & operator<<(std::ostream & o, Victim const & src);

#endif
