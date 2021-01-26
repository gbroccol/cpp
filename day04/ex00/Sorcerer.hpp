/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:22:57 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:37:26 by gbroccol         ###   ########.fr       */
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
	
	Sorcerer(std::string name, std::string title);
	Sorcerer( Sorcerer const & ClassToCopy );
	~Sorcerer(void);

	/* get */
	std::string			getName(void) const;
	std::string			getTitle(void) const;

	/* polymorph */
	void				polymorph(Victim const &vic) const;

	/* overload */
	Sorcerer			&operator=(Sorcerer const & src);

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif
