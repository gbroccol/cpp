/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:52 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/17 15:35:52 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"
// # include <sstream>

class HumanA
{
private:
	
	Weapon const	&myWeapon;
	std::string		name;

public:
	HumanA(std::string const name, Weapon const &myWeapon);
	~HumanA(void);

	void			attack(void) const;
};

HumanA::HumanA(std::string const name, Weapon const &myWeapon) : myWeapon(myWeapon), name(name)
{
}

HumanA::~HumanA(void)
{
}

void		HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->myWeapon.getType() << std::endl;
}

#endif
