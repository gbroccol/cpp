/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:16 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 11:52:05 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

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

#endif
