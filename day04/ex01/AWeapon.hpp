/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:47:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:45:24 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <iomanip>

class AWeapon
{
	private:
		
		std::string			_Name;
		int					_Damage;
		int					_APCost;
		
		AWeapon(void);
				
	public:

		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( AWeapon const & ClassToCopy );
		
		virtual ~AWeapon();	
		
		/* get */
		std::string			getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		
		virtual void attack() const = 0;

		/* overload */
		AWeapon			&operator=(AWeapon const & src);
};

#endif
