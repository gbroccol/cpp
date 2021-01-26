/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:21:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:43:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <iomanip>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	private:
		
		std::string			_Name;
		int					_AP;
		AWeapon				*_MyWeapon;
		Character(void);
	
	public:
		Character(std::string const & name);
		Character( Character const & ClassToCopy );
		
		virtual ~Character(void);
		
		void					recoverAP(void);
		void					equip(AWeapon *weapon);
		void					attack(Enemy *enemy);
		
		/* get */
		std::string				getName() const;
		int						getAP() const;
		AWeapon					*getWeapon() const;

		/* overload */
		Character			&operator=(Character const & src);
};

std::ostream & operator<<(std::ostream & o, Character const & src);

#endif
