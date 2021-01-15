/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:19:04 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 18:56:10 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
	this->name = "Chunky";
	this->type = "Supernatural";
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
	std::cout << "\x1b[31m";
	std::cout << "\t\t\t\t\t\tZombie " << name << " is killed, phew!!!" << std::endl;
	std::cout << "\x1b[0m";
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::set_type(std::string type)
{
	this->type = type;
}

void	Zombie::announce()
{
	std::cout << "\x1b[36m";
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;	
	std::cout << "\x1b[0m";
	return ;
}

