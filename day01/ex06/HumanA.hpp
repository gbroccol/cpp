/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:35:52 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 15:48:40 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	
	Weapon const	&myWeapon; // хранит ссылку на ОРУЖИЕ // const константная ссылка на неконстантную переменную
	std::string		name;

public:
	HumanA(std::string const name, Weapon const &myWeapon);
	~HumanA(void);

	void			attack(void) const;
};

#endif
