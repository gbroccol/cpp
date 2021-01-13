/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:44:10 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/14 00:54:56 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

Zombie::Zombie(void) {
	
	int		i = rand() % 10;
	std::string names[10] = {"Billy", "John", "Sam", "Braian", "Alex", \
							"Jessica", "Mary", "Ashley", "Betty", "Liam"};

	this->_name = names[i];
	this->_type = "heap";
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
