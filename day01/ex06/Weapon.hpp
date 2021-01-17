/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:16 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/17 15:35:16 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>
// # include <sstream>

class Weapon
{
private:
	
	std::string				type;

public:
	
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	
	std::string	const		&getType(void) const;
	void					setType(std::string type);
};

Weapon::Weapon(void) : type(0)
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string	const			&Weapon::getType(void) const
{
	
	// std::cout << "NEW TYPE - " << type << std::endl;
	// std::cout << std::endl << "WEAPON TYPE - " << this->type << std::endl;
	return this->type;

}

void						Weapon::setType(std::string type)
{
	this->type = type;
	// std::cout << "NEW TYPE - " << type << std::endl;
	// std::cout << "WEAPON TYPE - " << this->type << std::endl;
}

#endif
