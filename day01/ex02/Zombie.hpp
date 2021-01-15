/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:18:55 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 19:07:02 by gbroccol         ###   ########.fr       */
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

	void	announce(void);
	void	set_name(std::string name);
	void	set_type(std::string type);
};

#endif
