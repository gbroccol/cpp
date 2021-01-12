/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:44:19 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/12 20:11:34 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony (std::string color, std::string breed) {
	this->color = color;
	this->breed = breed;
	return ;
}

Pony::~Pony (void) {
	return ;
}

std::string			Pony::getColor(void)
{
	return (this->color);
}

std::string			Pony::getBreed(void)
{
	return (this->breed);
}