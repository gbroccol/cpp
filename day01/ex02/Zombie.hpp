/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:18:55 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/13 12:20:33 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream> // ?
#include <string> // ?
#include <iomanip> // ?

class  Zombie
{
private:
	std::string		type;
	std::string		name;
	
public:
	 Zombie(std::string name, std::string type);
	~ Zombie(void);

	void	announce(void); // output something along the lines of: <name (type)> Braiiiiiiinnnssss...
};

#endif
