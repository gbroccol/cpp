/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:24:25 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 20:36:25 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class  Zombie
{
private:
	std::string		type;
	std::string		name;
	
public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	~ Zombie(void);

	void			setName(std::string name);
	void			setType(std::string type);
	std::string		getName(void);
	void			announce(void);
};

#endif