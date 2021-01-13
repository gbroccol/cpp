/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:14:53 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/13 17:01:56 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string a_name, std::string a_color) : _name(a_name), _color(a_color) {

	return ;
}

Pony::~Pony(void) {

	return ;
}

std::string Pony::getName(void) {

	return (this->_name);
}

void		Pony::sing(void) {

	std::cout << this->_name <<  ": \"La-la-la...la-la-la\"" << std::endl;
}

void		Pony::eat_rainbow(void) {

	std::cout << this->_name <<  ": \"*eating rainbow sounds*\"" << std::endl;
}

void		Pony::sleep(void) {

	std::cout << this->_name <<  ": \"*snorring sounds*\"" << std::endl;
}
