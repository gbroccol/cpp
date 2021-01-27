/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:40 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 19:23:37 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	
	std::string			_Name;
	AMateria			**_MyMater;
	int					_MaterMax;			// add const
	int					_MaterAmount;
	Character(void);
	void				removeMater(void);
	
public:

	Character(std::string const & name);
	Character( Character const & ClassToCopy );
	virtual ~Character(void);

	virtual void							equip(AMateria *m);
	virtual void							unequip(int idx);
	virtual void							use(int idx, ICharacter& target);

	/* get */
	virtual std::string const				& getName() const;
	int const								& geMaterMax() const;
	int const								& getMaterAmount() const;

	/* overload */
	Character								&operator=(Character const & src);

};

#endif