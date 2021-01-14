/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:19:04 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/13 14:24:31 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ") " << "Braiiiiiiinnnssss..." << std::endl;	
	return ;
}

