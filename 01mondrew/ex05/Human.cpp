/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:20:41 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 23:02:21 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <string>

Human::Human(void) : _name("bob") {

	return ;
}

Human::~Human(void) {

	return ;
}

Brain const		&Human::getBrain(void) const {

	return (this->_brain);
}

std::string		Human::identify(void) const {

	return (getBrain().identify());

}
