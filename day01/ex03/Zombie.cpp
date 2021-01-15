/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:24:41 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 20:33:14 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie (void)
{
	this->name = "none";
	this->type = "none";
	return ;
}

Zombie::Zombie (std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void			Zombie::setName(std::string name)
{
	this->name = name;
}

void			Zombie::setType(std::string type)
{
	this->type = type;
}

std::string		Zombie::getName(void)
{
	return(this->name);
}

void			Zombie::announce(void)
{
	std::cout << "\x1b[36m";
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;	
	std::cout << "\x1b[0m";
	return ;
}
