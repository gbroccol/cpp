/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:22:57 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 12:39:05 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <iomanip>
#include "Victim.hpp"

class Sorcerer
{
private:
	
	std::string			_name;
	std::string			_title;

	Sorcerer(void);

public:
	
	Sorcerer(std::string name, std::string title);				// CONONICAL FORM
	Sorcerer( Sorcerer const & ClassToCopy );					// CONONICAL FORM
	~Sorcerer();												// CONONICAL FORM

	/* get */
	std::string			getName() const;
	std::string			getTitle() const;

	/* polymorph */
	void				polymorph(Victim const &vic) const;

	/* overload */
	Sorcerer			&operator=(Sorcerer const & src);		// CONONICAL FORM

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif
