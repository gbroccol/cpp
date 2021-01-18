/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:42 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 11:54:16 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	
	Weapon			*myWeapon;
	std::string		name;

public:
	HumanB(std::string const &name);
	~HumanB(void);

	void			attack(void) const;
	void			setWeapon(Weapon &newWeapon);
};

#endif

