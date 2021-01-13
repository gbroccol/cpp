/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:44:10 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 22:58:04 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string a_name, std::string a_type) : _name(a_name), 
															_type(a_type) {
	
	std::cout << "[V] New zombie " << this->_name << " is created" << std::endl;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << "[X] Zombie " << this->_name << " of type " 
								<< this->_type << " is dead" << std::endl;
	return ;
}

void	Zombie::announce(void) {

	std::cout << "<" << this->_name << " (" 
						<< this->_type << ")> Braiiiiiiinnnssss..." << std::endl;

	return ;
}
