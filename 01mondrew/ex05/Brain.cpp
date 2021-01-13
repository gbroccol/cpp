/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:24:37 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 23:01:33 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain(void) : _iq(116) {

	if (_iq < 100)
		_status = "stupid";
	else if (_iq >= 100 && _iq < 120)
		_status = "smart";
	else
		_status = "genius";
	std::cout << "New brain is created with iq = " << this->_iq 
						<< ". It is " << this->_status << "." << std::endl;
	return ;
}

Brain::~Brain(void) {

	std::cout << "Brain with iq = " << this->_iq << " is dead" << std::endl;

	return ;
}

std::string		Brain::identify(void) const {

	std::ostringstream	oss;

	oss << std::hex << this;

	return (oss.str());
}
