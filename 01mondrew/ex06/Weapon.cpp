/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 22:37:51 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:15:49 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string const &a_type) : _type(a_type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string const	&Weapon::getType(void) const {

	return (this->_type);
}

void				Weapon::setType(std::string n_type) {

	this->_type = n_type;

	return ;
}
